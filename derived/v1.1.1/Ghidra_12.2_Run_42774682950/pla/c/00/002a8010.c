/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a8010; name: __put_character_sequence<char,std::char_traits<char>>
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::__put_character_sequence<char, std::char_traits<char> >(std::ostream&, char
   const*, unsigned long) */

ostream * std::__put_character_sequence<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,ulong param_3)

{
  ostream *poVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_58 [16];
  id aiStack_48 [8];
  
                    /* try { // try from 002a8030 to 002a803b has its CatchHandler @ 002a8130 */
  std::ostream::sentry::sentry(local_58,param_1);
  if (local_58[0] != (sentry)0x0) {
    poVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar7 = *(undefined8 *)(poVar1 + 0x28);
    uVar3 = *(uint *)(poVar1 + 8);
    if (*(int *)(poVar1 + 0x90) == -1) {
                    /* try { // try from 002a8064 to 002a806f has its CatchHandler @ 002a8120 */
      std::ios_base::getloc();
                    /* try { // try from 002a8070 to 002a808f has its CatchHandler @ 002a8110 */
      plVar5 = (long *)std::locale::use_facet(aiStack_48);
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      std::locale::~locale((locale *)aiStack_48);
      *(uint *)(poVar1 + 0x90) = uVar4 & 0xff;
    }
    pcVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
                    /* try { // try from 002a80b8 to 002a80c7 has its CatchHandler @ 002a8120 */
    lVar6 = FUN_002a8170(uVar7,param_2,pcVar2,param_2 + param_3,poVar1);
    if (lVar6 == 0) {
                    /* try { // try from 002a80e4 to 002a80e7 has its CatchHandler @ 002a810c */
      std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::ostream::sentry::~sentry(local_58);
  return param_1;
}


