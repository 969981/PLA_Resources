/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96004; name: FUN_02e96004
 */


undefined8 FUN_02e96004(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  uVar4 = DAT_0440a388;
  plVar6 = DAT_0440a380;
  if ((DAT_0440a388 != 0) && (*DAT_0440a380 != param_1)) {
    lVar8 = (ulong)DAT_0440a388 * 8;
    plVar9 = DAT_0440a380;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) {
        plVar6 = DAT_0440a380 + DAT_0440a388;
        break;
      }
      plVar6 = plVar9 + 1;
      plVar1 = plVar9 + 1;
      plVar9 = plVar6;
    } while (*plVar1 != param_1);
  }
  if (plVar6 == (long *)0x0 || DAT_0440a380 + DAT_0440a388 == plVar6) {
    uVar3 = DAT_0440a38c;
    plVar6 = DAT_0440a380;
    if (DAT_0440a388 < DAT_0440a38c) {
joined_r0x02e960e8:
      DAT_0440a380 = plVar6;
      DAT_0440a38c = uVar3;
      if (uVar4 < DAT_0440a38c) {
        uVar7 = (ulong)DAT_0440a388;
        DAT_0440a388 = DAT_0440a388 + 1;
        if (DAT_0440a380 + uVar7 != (long *)0x0) {
          DAT_0440a380[uVar7] = param_1;
          goto LAB_02e96074;
        }
      }
    }
    else {
      iVar2 = DAT_0440a38c + (DAT_0440a38c >> 1);
      if (DAT_0440a38c == 0) {
        iVar2 = 1;
      }
      uVar3 = iVar2 + DAT_0440a38c;
      plVar6 = (long *)(*DAT_0442d148)(0,DAT_0440a380,(ulong)uVar3 << 3);
      if (plVar6 != (long *)0x0) goto joined_r0x02e960e8;
    }
    uVar5 = 0x34;
  }
  else {
LAB_02e96074:
    uVar5 = 1;
  }
  return uVar5;
}


