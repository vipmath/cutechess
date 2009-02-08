/*
    This file is part of Cute Chess.

    Cute Chess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Cute Chess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Cute Chess.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CHESSCLOCK_H
#define CHESSCLOCK_H

#include <QLCDNumber>
#include <QTime>

class QTimerEvent;


class ChessClock: public QLCDNumber
{
	Q_OBJECT
	
	public:
		ChessClock(QWidget* parent = 0);
	
	public slots:	
		void start(int totalTime);
		void stop();
	
	protected:
		void timerEvent(QTimerEvent* event);
	
	private:
		void updateDisplay();
		
		int m_totalTime;
		int m_timerId;
		QTime m_time;
};


#endif // CHESSCLOCK

