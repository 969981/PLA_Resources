/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00704ef8; name: FUN_00704ef8
 */


void FUN_00704ef8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  FUN_00704a8c();
  lVar3 = *param_3;
  lVar2 = param_3[1];
  if (lVar3 == lVar2) {
    return;
  }
  if ((*(byte *)(lVar3 + 0x98) & 1) == 0) goto LAB_00704f48;
  do {
    lVar4 = *(long *)(lVar3 + 0xa8);
    lVar5 = lVar3;
    while( true ) {
                    /* try { // try from 00704f54 to 00704f5b has its CatchHandler @ 00705008 */
      FUN_0070501c(param_1,lVar4);
      if ((*(byte *)(lVar5 + 0x50) & 1) == 0) {
        lVar3 = lVar5 + 0x51;
      }
      else {
        lVar3 = *(long *)(lVar5 + 0x60);
      }
      FUN_002a8590(&local_50,lVar3,0);
      uVar1 = (ulong)&local_50 | 1;
      if ((local_50 & 1) != 0) {
        uVar1 = local_40;
      }
                    /* try { // try from 00704f8c to 00704f93 has its CatchHandler @ 00704fd0 */
      FUN_00704d78(param_1,uVar1);
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar5 + 0xe0;
      if (lVar2 == lVar3) {
        return;
      }
      if ((*(byte *)(lVar5 + 0x178) & 1) != 0) break;
LAB_00704f48:
      lVar4 = lVar3 + 0x99;
      lVar5 = lVar3;
    }
  } while( true );
}


