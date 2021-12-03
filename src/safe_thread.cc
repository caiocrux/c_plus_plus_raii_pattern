/*
 * safe_thread.cc
 * 
 * Copyright 2021 Caio Felipe Cruz <caio.crux@gmail.com>
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
#include <safe_thread.hpp>

ThreadSafe::ThreadSafe(std::thread&& t): m_t(std::move(t)) {
}

ThreadSafe::~ThreadSafe() {
    if (m_t.joinable()) {
        m_t.join();
    }
}

std::thread::id ThreadSafe::get_thread_id(void) {
    return m_t.get_id();
}
