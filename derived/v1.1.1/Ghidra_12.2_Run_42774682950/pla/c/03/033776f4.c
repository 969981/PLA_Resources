/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033776f4; name: FUN_033776f4
 */


void FUN_033776f4(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *local_48 [2];
  ulong local_38;
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 6) == '\0') {
    FUN_032dc3a0(local_48,*(undefined8 *)param_1[1],&DAT_04357af8);
    if ((local_38 & 1) != 0) {
      FUN_032e0c40(local_38 & 0xfffffffffffffffe);
    }
    if (local_48[0] != (undefined8 *)0x0) {
      (*(code *)*local_48[0])(*(undefined8 *)param_1[2],*(undefined8 *)param_1[1],lVar6 + 8);
      return;
    }
  }
  if (((*(byte *)(*(long *)param_1[1] + 2) >> 4 & 1) == 0) ||
     (puVar2 = (uint *)FUN_032e2008(*(long *)param_1[1],0x100000), puVar2 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar2;
  }
  uVar1 = uVar7 & 0xf0000000;
  if (((**(byte **)param_1[2] & 1) == 0) ||
     (puVar2 = (uint *)FUN_032e2008(*(byte **)param_1[2],1), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
  }
  uVar4 = (ulong)uVar1;
  if (*(char *)(lVar6 + 6) == '\0') {
    if ((*(long *)(*(long *)param_1[2] + 8) != 0) || (*(char *)(*(long *)param_1[2] + 2) < '\0'))
    goto switchD_0337778c_caseD_7;
    switch(uVar5 & 0x1f) {
    case 2:
    case 4:
    case 5:
      goto switchD_0337778c_caseD_4;
    case 3:
      if ((0xffff < uVar5) && (uVar4 = (ulong)uVar7, (uVar5 >> 5 & 1) != 0)) break;
    case 6:
      uVar4 = (ulong)(*(ushort *)(lVar6 + 8) | uVar1 | (*(ushort *)(lVar6 + 8) & 0xfff) << 0x10);
      break;
    default:
      break;
    }
  }
  else {
    switch(uVar5 & 0x1f) {
    case 2:
      uVar4 = (ulong)(uVar1 | 0x10001);
      break;
    case 3:
    case 6:
      uVar4 = (ulong)(uVar1 | 0x40004);
      break;
    case 4:
    case 5:
switchD_0337778c_caseD_4:
      uVar4 = (ulong)uVar7;
      break;
    case 8:
      uVar7 = uVar1 | 0x40004;
      if (0xff < uVar5) {
        uVar7 = uVar1;
      }
      uVar4 = (ulong)uVar7;
    }
  }
switchD_0337778c_caseD_7:
  puVar3 = (ulong *)FUN_032e1fa4(*(undefined8 *)param_1[2],0x100000);
  *puVar3 = uVar4;
  return;
}


