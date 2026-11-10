/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eaa30; name: FUN_003eaa30
 */


void FUN_003eaa30(int *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  *param_1 = 0;
  piVar4 = param_1 + 2;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar6 = param_1 + 10;
  piVar6[0] = 0;
  piVar6[1] = 0;
  piVar5 = param_1 + 8;
  *(int **)piVar5 = piVar6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar6 = param_1 + 0xe;
  piVar6[0] = 0;
  piVar6[1] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar3 = *param_2;
  *param_1 = iVar3;
  if (iVar3 - 3U < 2) {
    if (param_1 != param_2) {
      uVar1 = *(ulong *)(param_2 + 4);
      lVar2 = *(long *)(param_2 + 6);
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        lVar2 = (long)param_2 + 9;
        uVar1 = (ulong)(*(byte *)(param_2 + 2) >> 1);
      }
      FUN_00291910(piVar4,lVar2,uVar1);
    }
  }
  else if (iVar3 == 5) {
    if (piVar5 != param_2 + 8) {
      FUN_003eab54(piVar5,*(undefined8 *)(param_2 + 8),param_2 + 10);
    }
  }
  else if ((iVar3 == 6) && (param_1 != param_2)) {
                    /* try { // try from 003eaaa4 to 003eab03 has its CatchHandler @ 003eab18 */
    FUN_003eb180(piVar6,*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10));
  }
  return;
}


