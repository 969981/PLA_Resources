/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951d74; name: FUN_02951d74
 */


undefined8 FUN_02951d74(long param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 2) {
    return 0;
  }
  if (param_2 == 8) {
    return 0;
  }
  puVar2 = (ulong *)(param_1 + (ulong)param_2 * 8 + 0x90);
  uVar5 = *puVar2;
  if ((uVar5 & 7) == 0) {
    return 0;
  }
  uVar4 = (uint)uVar5 & 7;
  if ((uVar4 == 4) || (uVar4 == 2)) {
    uVar3 = (uint)uVar5 >> 8 & 0x3f;
  }
  else {
    uVar3 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 == 0x2f) {
    switch(uVar4) {
    case 1:
    case 2:
    case 3:
      uVar4 = (uint)(uVar5 >> 0xe);
      break;
    case 4:
      uVar4 = (uint)(uVar5 >> 0x14);
      break;
    default:
      uVar4 = 0;
    }
    if ((param_3 == (undefined1 *)0x0) || (*(uint *)(param_1 + 0x378) == (uVar4 & 0xffff)))
    goto LAB_02951eb8;
  }
  else {
    if (param_2 != 0x1e) goto LAB_02951eb8;
    switch(uVar4) {
    case 1:
    case 2:
    case 3:
      uVar4 = (uint)(uVar5 >> 0xe);
      break;
    case 4:
      uVar4 = (uint)(uVar5 >> 0x14);
      break;
    default:
      uVar4 = 0;
    }
    uVar4 = uVar4 & 0xffff;
    if ((((*(uint *)(param_1 + 0x300) == uVar4) || (*(uint *)(param_1 + 0x31c) == uVar4)) ||
        (*(uint *)(param_1 + 0x338) == uVar4)) ||
       ((param_3 == (undefined1 *)0x0 || (*(uint *)(param_1 + 0x354) == uVar4)))) goto LAB_02951eb8;
  }
  *param_3 = 1;
LAB_02951eb8:
  if (uVar3 == 0) {
    uVar5 = *puVar2;
    if (((uVar5 & 7) == 1) && ((uVar5 & 0x3f00) != 0)) {
      param_1 = param_1 + (ulong)param_2;
      bVar1 = *(byte *)(param_1 + 0x238);
      if ((uint)bVar1 < ((uint)uVar5 >> 8 & 0x3f)) {
        *(byte *)(param_1 + 0x238) = bVar1 + 1;
      }
      return 1;
    }
  }
  else {
    param_1 = param_1 + (ulong)param_2;
    bVar1 = *(char *)(param_1 + 0x238) + 1;
    *(byte *)(param_1 + 0x238) = bVar1;
    if ((param_3 != (undefined1 *)0x0) && (uVar3 <= bVar1)) {
      *param_3 = 1;
      return 1;
    }
  }
  return 1;
}


