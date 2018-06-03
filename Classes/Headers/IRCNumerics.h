/* *********************************************************************
 *                  _____         _               _
 *                 |_   _|____  _| |_ _   _  __ _| |
 *                   | |/ _ \ \/ / __| | | |/ _` | |
 *                   | |  __/>  <| |_| |_| | (_| | |
 *                   |_|\___/_/\_\\__|\__,_|\__,_|_|
 *
 *    Copyright (c) 2018 Codeux Software, LLC & respective contributors.
 *       Please see Acknowledgements.pdf for additional information.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of Textual, "Codeux Software, LLC", nor the
 *    names of its contributors may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *********************************************************************** */

enum {
	RPL_WELCOME = 1,
	RPL_YOURHOST = 2,
	RPL_CREATED = 3,
	RPL_MYINFO = 4,
	RPL_ISUPPORT = 5,
	RPL_REDIR = 10,
	RPL_UMODEIS = 221,
	RPL_STATSCONN = 250,
	RPL_LUSERCLIENT = 251,
	RPL_LUSERHOP = 252,
	RPL_LUSERUNKNOWN = 253,
	RPL_LUSERCHANNELS = 254,
	RPL_LUSERME = 255,
	RPL_LOCALUSERS = 265,
	RPL_GLOBALUSERS = 266,
	RPL_WHOISCERTFP = 276,
	RPL_AWAY = 301,
	RPL_ISON = 303,
	RPL_UNAWAY = 305,
	RPL_NOWAWAY = 306,
	RPL_WHOISREGNICK = 307,
	RPL_WHOISHELPOP = 310,
	RPL_WHOISUSER = 311,
	RPL_WHOISSERVER = 312,
	RPL_WHOISOPERATOR = 313,
	RPL_WHOWASUSER = 314,
	RPL_ENDOFWHO = 315,
	RPL_WHOISIDLE = 317,
	RPL_ENDOFWHOIS = 318,
	RPL_WHOISCHANNELS = 319,
	RPL_WHOISSPECIAL = 320,
	RPL_LISTSTART = 321,
	RPL_LIST = 322,
	RPL_LISTEND = 323,
	RPL_CHANNELMODEIS = 324,
	RPL_CHANNEL_URL = 328,
	RPL_CREATIONTIME = 329,
	RPL_WHOISACCOUNT = 330,
	RPL_TOPIC = 332,
	RPL_TOPICWHOTIME = 333,
	RPL_WHOISBOT = 335,
	RPL_WHOISACTUALLY = 338,
	RPL_INVITING = 341,
	RPL_INVITELIST = 346,
	RPL_ENDOFINVITELIST = 347,
	RPL_EXCEPTLIST = 348,
	RPL_ENDOFEXCEPTLIST = 349,
	RPL_WHOREPLY = 352,
	RPL_NAMEREPLY = 353,
	RPL_ENDOFNAMES = 366,
	RPL_BANLIST = 367,
	RPL_ENDOFBANLIST = 368,
	RPL_ENDOFWHOWAS = 369,
	RPL_MOTD = 372,
	RPL_MOTDSTART = 375,
	RPL_ENDOFMOTD = 376,
	RPL_WHOISHOST = 378,
	RPL_WHOISMODES = 379,
	RPL_YOUREOPER = 381,
	ERR_NOMOTD = 422,
	ERR_TOOMANYWATCH = 512,
	RPL_REAWAY = 597,
	RPL_GONEAWAY = 598,
	RPL_NOTAWAY = 599,
	RPL_LOGON = 600,
	RPL_LOGOFF = 601,
	RPL_WATCHOFF = 602,
	RPL_WATCHSTAT = 603,
	RPL_NOWON = 604,
	RPL_NOWOFF = 605,
	RPL_WATCHLIST = 606,
	RPL_ENDOFWATCHLIST = 607,
	RPL_CLEARWATCH = 608,
	/* RPL_CHANNELSMSG and RPL_WHOWASIP were added recently.
	 Reference: https://github.com/inspircd/inspircd/commit/150258b1f110aad58c8882b76474a4ceb3b2ab97 */
	RPL_CHANNELSMSG = 651, // (is on private/secret channels..., InspIRCd)
	RPL_WHOWASIP = 652, // (was connected from..., InspIRCd)
	RPL_WHOISSECURE = 671,
	RPL_WHOISREALIP = 672, // (is a CGI:IRC client from..., Rizon)
	RPL_TARGUMODEG = 716,
	RPL_TARGNOTIFY = 717,
	RPL_UMODEGMSG = 718,
	RPL_QUIETLIST = 728,
	RPL_ENDOFQUIETLIST = 729,
	RPL_MONONLINE = 730,
	RPL_MONOFFLINE = 731,
	RPL_MONLIST = 732,
	RPL_ENDOFMONLIST = 733,
	ERR_MONLISTFULL = 734,
	RPL_LOGGEDIN = 900,
	RPL_LOGGEDOUT = 901,
	ERR_NICKLOCKED = 902,
	RPL_SASLSUCCESS = 903,
	ERR_SASLFAIL = 904,
	ERR_SASLTOOLONG = 905,
	ERR_SASLABORTED = 906,
	ERR_SASLALREADY = 907,
	RPL_SASLMECHS = 908
};
