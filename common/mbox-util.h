/* mbox-util.h - Defs for mail address helper functions
 * Copyright (C) 2015 Werner Koch
 *
 * This file is part of GnuPG.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either
 *
 *   - the GNU Lesser General Public License as published by the Free
 *     Software Foundation; either version 3 of the License, or (at
 *     your option) any later version.
 *
 * or
 *
 *   - the GNU General Public License as published by the Free
 *     Software Foundation; either version 2 of the License, or (at
 *     your option) any later version.
 *
 * or both in parallel, as here.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */
#ifndef GNUPG_COMMON_MBOX_UTIL_H
#define GNUPG_COMMON_MBOX_UTIL_H

int has_invalid_email_chars (const char *s);
int is_valid_mailbox (const char *name);
char *mailbox_from_userid (const char *userid);
int is_valid_user_id (const char *uid);


#endif /*GNUPG_COMMON_MBOX_UTIL_H*/