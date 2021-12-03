/*
 * safe_thread.hpp
 * 
 * Copyright 2021 Caio Felipe Cruz <caio.crux@gmai.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#pragma once

#include <thread>

class ThreadSafe{
 private:
    std::thread m_t;
 public:
    explicit ThreadSafe(std::thread&& t);
    ~ThreadSafe();
    std::thread::id get_thread_id();
    // delete copy contructor
    ThreadSafe(const ThreadSafe&) = delete;
    ThreadSafe& operator=(const ThreadSafe&) = delete;
    // Provide mode operators
    ThreadSafe(ThreadSafe&&) noexcept = default;
    ThreadSafe& operator=(ThreadSafe&&) noexcept = default;


};
