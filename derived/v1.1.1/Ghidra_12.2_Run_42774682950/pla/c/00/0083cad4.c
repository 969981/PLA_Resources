/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083cad4; name: FUN_0083cad4
 */


void FUN_0083cad4(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  undefined4 local_70 [4];
  undefined4 local_58 [2];
  
  if (param_3 == 0) {
    local_70[0] = 0x10407;
    goto LAB_0083cc7c;
  }
  plVar2 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
  if (((((((lVar3 == 0) || (*(char *)(lVar3 + 0x78) != '\0')) || (*(int *)(lVar3 + 0x3c) == 3)) ||
        ((*(long *)(param_2 + 0x60) == param_3 || (*(long *)(param_2 + 0x70) == param_3)))) ||
       (*(long *)(param_2 + 0x80) == param_3)) ||
      (((((*(long *)(param_2 + 0x90) == param_3 || (*(long *)(param_2 + 0xa0) == param_3)) ||
         ((*(long *)(param_2 + 0xb0) == param_3 ||
          (((*(long *)(param_2 + 0xc0) == param_3 || (*(long *)(param_2 + 0xd0) == param_3)) ||
           (*(long *)(param_2 + 0xe0) == param_3)))))) ||
        (((*(long *)(param_2 + 0xf0) == param_3 || (*(long *)(param_2 + 0x100) == param_3)) ||
         ((*(long *)(param_2 + 0x110) == param_3 ||
          ((((*(long *)(param_2 + 0x120) == param_3 || (*(long *)(param_2 + 0x130) == param_3)) ||
            ((*(long *)(param_2 + 0x140) == param_3 ||
             (((*(long *)(param_2 + 0x150) == param_3 || (*(long *)(param_2 + 0x160) == param_3)) ||
              (*(long *)(param_2 + 0x170) == param_3)))))) ||
           ((*(long *)(param_2 + 0x180) == param_3 || (*(long *)(param_2 + 400) == param_3))))))))))
       || (*(long *)(param_2 + 0x1a0) == param_3)))) ||
     (((*(long *)(param_2 + 0x1b0) == param_3 || (*(long *)(param_2 + 0x1c0) == param_3)) ||
      (*(long *)(param_2 + 0x1d0) == param_3)))) {
LAB_0083cc64:
    local_70[0] = 0;
  }
  else {
    uVar5 = 0;
    if (*(long *)(param_2 + 0x60) != 0) {
      uVar5 = 0x18;
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      uVar5 = 1;
    }
    uVar1 = 2;
    if (*(long *)(param_2 + 0x80) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 3;
    if (*(long *)(param_2 + 0x90) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 4;
    if (*(long *)(param_2 + 0xa0) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 5;
    if (*(long *)(param_2 + 0xb0) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 6;
    if (*(long *)(param_2 + 0xc0) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 7;
    if (*(long *)(param_2 + 0xd0) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 8;
    if (*(long *)(param_2 + 0xe0) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 9;
    if (*(long *)(param_2 + 0xf0) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 10;
    if (*(long *)(param_2 + 0x100) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0xb;
    if (*(long *)(param_2 + 0x110) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0xc;
    if (*(long *)(param_2 + 0x120) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0xd;
    if (*(long *)(param_2 + 0x130) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0xe;
    if (*(long *)(param_2 + 0x140) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0xf;
    if (*(long *)(param_2 + 0x150) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0x10;
    if (*(long *)(param_2 + 0x160) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0x11;
    if (*(long *)(param_2 + 0x170) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0x12;
    if (*(long *)(param_2 + 0x180) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0x13;
    if (*(long *)(param_2 + 400) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0x14;
    if (*(long *)(param_2 + 0x1a0) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0x15;
    if (*(long *)(param_2 + 0x1b0) != 0) {
      uVar5 = uVar1;
    }
    uVar1 = 0x16;
    if (*(long *)(param_2 + 0x1c0) != 0) {
      uVar1 = uVar5;
    }
    uVar5 = 0x17;
    if (*(long *)(param_2 + 0x1d0) != 0) {
      uVar5 = uVar1;
    }
    if (uVar5 < 0x18) {
      *(undefined1 *)(lVar3 + 0x78) = 1;
      FUN_0082fb40(*(undefined8 *)PTR_DAT_04377ce8);
      uVar4 = FUN_00839cc4(*(undefined8 *)(param_2 + 0x58),param_3,param_4);
      if ((uVar4 & 1) != 0) {
        param_2 = param_2 + (ulong)uVar5 * 0x10;
        *(long *)(param_2 + 0x60) = param_3;
        *(undefined4 *)(param_2 + 0x68) = param_4;
        goto LAB_0083cc64;
      }
    }
    local_70[0] = 0x4c0d;
  }
LAB_0083cc7c:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_58);
  FUN_007ee578(param_1,local_70);
  return;
}


