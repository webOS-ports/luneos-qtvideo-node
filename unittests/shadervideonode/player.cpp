/*
 * Copyright (C) 2012 Canonical, Ltd.
 *
 * Authors:
 *  Jim Hodapp <jim.hodapp@canonical.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "media_compatibility_layer.h"

#include <QtGlobal>

// Mock object so that we don't get an incomplete type compiler error
struct MediaPlayerWrapper
{
    MediaPlayerWrapper() { }
};

MediaPlayerWrapper *android_media_new_player()
{
    return new MediaPlayerWrapper();
}

void android_media_update_surface_texture(MediaPlayerWrapper *mp)
{
    Q_UNUSED(mp);
}

void android_media_surface_texture_get_transformation_matrix(MediaPlayerWrapper *mp, GLfloat* matrix)
{
    Q_UNUSED(mp);
    Q_UNUSED(matrix);
}