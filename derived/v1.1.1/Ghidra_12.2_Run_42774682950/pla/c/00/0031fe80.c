/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031fe80; name: FUN_0031fe80
 */


/* WARNING: Removing unreachable block (ram,0x00320004) */

void FUN_0031fe80(byte *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((long)param_2 < 1) {
    uVar2 = 0;
    if (param_2 == 0) goto LAB_0031ffb0;
  }
  else {
    if (param_2 < 4) {
      uVar3 = 0;
      uVar2 = 0;
joined_r0x0031ff38:
      if ((param_2 & 1) == 0) {
        uVar5 = uVar3;
      }
      else {
        uVar2 = uVar2 + (byte)(&DAT_039f9ee0)[param_1[uVar3]];
        uVar5 = uVar3 | 1;
      }
      if (param_2 != (uVar3 | 1)) {
        lVar4 = param_2 - uVar5;
        pbVar6 = param_1 + uVar5 + 1;
        do {
          lVar4 = lVar4 + -2;
          uVar2 = uVar2 + (byte)(&DAT_039f9ee0)[pbVar6[-1]] + (ulong)(byte)(&DAT_039f9ee0)[*pbVar6];
          pbVar6 = pbVar6 + 2;
        } while (lVar4 != 0);
      }
    }
    else {
      uVar3 = param_2 & 0xfffffffffffffffc;
      lVar8 = 0;
      lVar9 = 0;
      lVar7 = 0;
      lVar4 = 0;
      pbVar6 = param_1 + 3;
      uVar2 = uVar3;
      do {
        uVar2 = uVar2 - 4;
        lVar4 = lVar4 + (ulong)(byte)(&DAT_039f9ee0)[*pbVar6];
        lVar8 = lVar8 + (ulong)(byte)(&DAT_039f9ee0)[pbVar6[-3]];
        lVar9 = lVar9 + (ulong)(byte)(&DAT_039f9ee0)[pbVar6[-2]];
        lVar7 = lVar7 + (ulong)(byte)(&DAT_039f9ee0)[pbVar6[-1]];
        pbVar6 = pbVar6 + 4;
      } while (uVar2 != 0);
      uVar2 = lVar4 + lVar7 + lVar9 + lVar8;
      if (param_2 != uVar3) goto joined_r0x0031ff38;
    }
    if (uVar2 == param_2) {
LAB_0031ffb0:
      FUN_002e4094(param_3,param_1,param_2);
      return;
    }
  }
  bVar1 = *param_3;
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
    uVar3 = uVar5 + uVar2;
    if (uVar3 <= uVar5) goto LAB_0031ffe8;
LAB_00320018:
    FUN_002e6bd4(param_3,uVar2,0);
    bVar1 = *param_3;
joined_r0x0032004c:
    if ((bVar1 & 1) != 0) {
      param_3 = *(byte **)(param_3 + 0x10);
      goto joined_r0x00320058;
    }
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
    uVar3 = uVar5 + uVar2;
    if (uVar5 < uVar3) goto LAB_00320018;
LAB_0031ffe8:
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_3 + 0x10) + uVar3) = 0;
      *(ulong *)(param_3 + 8) = uVar3;
      bVar1 = *param_3;
      goto joined_r0x0032004c;
    }
    param_3[uVar3 + 1] = 0;
    *param_3 = (byte)((int)uVar3 << 1);
  }
  param_3 = param_3 + 1;
joined_r0x00320058:
  if (0 < (long)param_2) {
    param_3 = param_3 + uVar5;
    bVar1 = *param_1;
    while( true ) {
      if (bVar1 - 9 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x003200c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_00320098 + (ulong)(byte)(&DAT_039f9df9)[bVar1 - 9] * 4))();
        return;
      }
      if (bVar1 == 0x5c) {
        param_3[0] = 0x5c;
        param_3[1] = 0x5c;
        param_3 = param_3 + 2;
      }
      else if (bVar1 - 0x20 < 0x5f) {
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      else {
        param_3[1] = bVar1 >> 6 | 0x30;
        param_3[2] = bVar1 >> 3 & 7 | 0x30;
        *param_3 = 0x5c;
        param_3[3] = bVar1 & 7 | 0x30;
        param_3 = param_3 + 4;
      }
      if (param_2 == 1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
      bVar1 = *param_1;
    }
  }
  return;
}


