/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc620; name: FUN_004dc620
 */


undefined8 FUN_004dc620(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  long lVar6;
  ushort local_14 [2];
  
  if ((param_2 & 0xffff) == 0) {
    return 0;
  }
  uVar3 = (uint)param_2;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if ((uVar1 != 0) && (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar6 != 0)) {
    iVar2 = *(int *)(lVar6 + 0x18);
    if (iVar2 == 0x300c02c) {
      if ((uVar3 & 0xffff) != 0x18) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02b) {
        return 0;
      }
      if ((uVar3 & 0xffff) != 0x17) {
        return 0;
      }
    }
  }
  if (param_3 == 0) goto LAB_004dc734;
  if (uVar1 == 0x30000) {
    lVar6 = 2;
LAB_004dc6bc:
    puVar5 = &DAT_03a280c8;
    if ((uint)DAT_03a280c8 == (uVar3 & 0xffff)) goto LAB_004dc734;
  }
  else if (uVar1 == 0x20000) {
    lVar6 = 1;
    puVar5 = &DAT_03a280ca;
    if ((uint)DAT_03a280ca == (uVar3 & 0xffff)) goto LAB_004dc734;
  }
  else {
    if (uVar1 == 0x10000) {
      lVar6 = 1;
      goto LAB_004dc6bc;
    }
    puVar5 = *(ushort **)(param_1 + 0x698);
    if (puVar5 != (ushort *)0x0) {
      lVar6 = *(long *)(param_1 + 0x690);
      if (lVar6 != 0) goto LAB_004dc700;
      return 0;
    }
    lVar6 = 5;
    puVar5 = &DAT_03a280cc;
    if ((uint)DAT_03a280cc == (uVar3 & 0xffff)) goto LAB_004dc734;
  }
  do {
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 1;
    if (lVar6 == 0) {
      return 0;
    }
LAB_004dc700:
  } while ((uint)*puVar5 != (uVar3 & 0xffff));
LAB_004dc734:
  lVar6 = (param_2 & 0xffff) * 0xc;
  if (0x1d < (uVar3 - 1 & 0xffff)) {
    return 0;
  }
  local_14[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  uVar4 = FUN_004e2fc0(param_1,0x20006,
                       *(undefined4 *)(&switchD_004dcc3c::switchdataD_03a27f58 + lVar6),
                       *(undefined4 *)(&DAT_03a27f54 + lVar6),local_14);
  if ((int)uVar4 != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x508) + 0x240);
      if (lVar6 != 0) {
        puVar5 = *(ushort **)(*(long *)(param_1 + 0x508) + 0x248);
        while ((uint)*puVar5 != (uVar3 & 0xffff)) {
          lVar6 = lVar6 + -1;
          puVar5 = puVar5 + 1;
          if (lVar6 == 0) {
            return 0;
          }
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


