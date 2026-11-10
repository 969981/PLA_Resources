/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9898; name: FUN_027d9898
 */


undefined8 FUN_027d9898(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0xb8) == 2 || *(int *)(param_1 + 0xb8) == 5) {
    return 0;
  }
  if (DAT_04408e40 == 0) {
    local_40 = 0;
    local_48 = 0;
  }
  else {
    local_48 = DAT_04408e40;
    local_40 = DAT_04408e60;
  }
  local_38 = 0;
  local_4c = 6;
  FUN_027daafc(auStack_50,&local_4c,&local_48);
  uVar3 = *(ushort *)(param_1 + 0xf8);
  uVar1 = uVar3 + 1;
  lVar4 = FUN_027d816c(uVar1);
  uVar6 = local_38;
  if (local_40 < local_38 + lVar4) goto LAB_027d99e8;
  if (uVar3 < 0x7f) {
    *(char *)(local_48 + local_38) = (char)uVar1;
    uVar2 = uVar1 & 0xff;
    if (uVar2 == 0x86) {
LAB_027d99d4:
      *(uint *)(local_48 + local_38 + 1) = uVar1;
      uVar6 = local_38 + 5;
    }
    else {
      if (uVar2 == 0x85) goto LAB_027d99ac;
      uVar6 = local_38 + 1;
      if (uVar2 != 0x84) goto LAB_027d99e8;
      *(undefined1 *)(local_48 + local_38 + 1) = 0x84;
      uVar6 = local_38 + 2;
    }
  }
  else {
    if (0x7ffe < uVar3) {
      *(undefined1 *)(local_48 + local_38) = 0x86;
      goto LAB_027d99d4;
    }
    *(undefined1 *)(local_48 + local_38) = 0x85;
LAB_027d99ac:
    *(short *)(local_48 + local_38 + 1) = (short)uVar1;
    uVar6 = local_38 + 3;
  }
LAB_027d99e8:
  local_38 = uVar6;
  lVar4 = *(long *)(param_1 + 0x90);
  if ((*(long *)(lVar4 + 0xa8) != 0) && (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) != 0)) {
    plVar5 = *(long **)(lVar4 + 0xb8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar4 + 0x6c,*(undefined8 *)(param_1 + 0x88));
    if (((uVar6 & 1) != 0) &&
       (uVar6 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))
                          (*(long **)(param_1 + 0x90),DAT_04408e40,local_38 & 0xffffffff,
                           (undefined8 *)(param_1 + 0x88)), (uVar6 & 1) != 0)) {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      *(undefined4 *)(param_1 + 0xb8) = 2;
      *(short *)(param_1 + 0xf8) = *(short *)(param_1 + 0xf8) + 1;
      if ((*(uint *)(param_1 + 0xbc) & 0xfffffffe) == 4) {
        *(undefined4 *)(param_1 + 0xbc) = 3;
      }
      *(short *)(param_1 + 0xfa) = *(short *)(param_1 + 0xfa) + 1;
      return 1;
    }
  }
  return 0;
}


