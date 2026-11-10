/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00828cd8; name: FUN_00828cd8
 */


void FUN_00828cd8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  lVar4 = *param_2;
  do {
    if (lVar4 == 0) {
      local_40[0] = 0x2c0a;
LAB_00828dd4:
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      FUN_007ee578(param_1,local_40);
      return;
    }
    uVar2 = FUN_007e45a8(lVar4,param_3);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == *param_2) {
        if (lVar4 == param_2[1]) {
          *param_2 = 0;
          param_2[1] = 0;
          lVar1 = *(long *)(lVar4 + 0x48);
          lVar3 = *(long *)(lVar4 + 0x50);
        }
        else {
          *param_2 = *(long *)(lVar4 + 0x48);
          lVar1 = *(long *)(lVar4 + 0x48);
          lVar3 = *(long *)(lVar4 + 0x50);
        }
      }
      else {
        if (lVar4 == param_2[1]) {
          param_2[1] = *(long *)(lVar4 + 0x50);
        }
        lVar1 = *(long *)(lVar4 + 0x48);
        lVar3 = *(long *)(lVar4 + 0x50);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x48) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x50) = lVar3;
      }
      lVar3 = param_2[2];
      lVar1 = *(long *)(lVar3 + 0x20);
      if (*(long *)(lVar3 + 0x18) == 0) {
        if (lVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(long *)(lVar3 + 0x18) = lVar4;
          goto LAB_00828d98;
        }
      }
      else if (lVar1 != 0) {
        *(long *)(lVar1 + 0x38) = lVar4;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(long *)(lVar4 + 0x40) = lVar1;
LAB_00828d98:
        *(long *)(lVar3 + 0x20) = lVar4;
      }
      if (*(long *)(lVar3 + 8) == lVar4) {
        if (*(long *)(lVar3 + 0x10) == lVar4) {
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x10) = 0;
          lVar1 = *(long *)(lVar4 + 0x28);
          lVar4 = *(long *)(lVar4 + 0x30);
        }
        else {
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar4 + 0x28);
          lVar1 = *(long *)(lVar4 + 0x28);
          lVar4 = *(long *)(lVar4 + 0x30);
        }
      }
      else {
        if (*(long *)(lVar3 + 0x10) == lVar4) {
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar4 + 0x30);
        }
        lVar1 = *(long *)(lVar4 + 0x28);
        lVar4 = *(long *)(lVar4 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x28) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = lVar4;
      }
      local_40[0] = 0;
      goto LAB_00828dd4;
    }
    lVar4 = *(long *)(lVar4 + 0x48);
  } while( true );
}


