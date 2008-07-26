/*
    This file is part of SloppyGUI.

    SloppyGUI is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SloppyGUI is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SloppyGUI.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CHESSPLAYER_H
#define CHESSPLAYER_H

#include <QObject>
#include "chessboard/chessboard.h"

class ChessPlayer: public QObject
{
Q_OBJECT

public:
	ChessPlayer(QObject *parent = 0);
	virtual ~ChessPlayer() { }

	// Set the player to play as 'side'
	virtual void setSide(Chessboard::ChessSide side);

	Chessboard::ChessSide side() const;
	
	virtual bool isHuman() const = 0;

private:
	Chessboard::ChessSide m_side;
};

#endif

