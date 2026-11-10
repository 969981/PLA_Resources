/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c23d0; name: FUN_004c23d0
 */


undefined8 FUN_004c23d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 2) == 0) {
    uVar3 = 0xbc;
    uVar4 = 0x244;
  }
  else {
    iVar2 = FUN_003ffe70();
    if (iVar2 != 0) {
      FUN_003fef10(*(undefined8 *)(param_1 + 0x142));
      *(undefined8 *)(param_1 + 0x142) = 0;
    }
    FUN_003fef10(*(undefined8 *)(param_1 + 0x144));
    *(undefined8 *)(param_1 + 0x144) = 0;
    FUN_00400420(*(undefined8 *)(param_1 + 0x146),"external/openssl/ssl/ssl_lib.c",0x24e);
    param_1[0x136] = 0;
    *(undefined8 *)(param_1 + 0x606) = 0;
    param_1[0x15c] = 0;
    param_1[0x32] = 0;
    param_1[0x11] = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x146) = 0;
    if (param_1[0x1d0] == 0) {
      FUN_004c9970(param_1);
      uVar1 = **(undefined4 **)(param_1 + 2);
      *param_1 = uVar1;
      param_1[0x17b] = uVar1;
      param_1[10] = 1;
      FUN_00417470(*(undefined8 *)(param_1 + 0x22));
      *(undefined8 *)(param_1 + 0x22) = 0;
      if (*(long *)(param_1 + 0x10e) != 0) {
        FUN_0041b550();
        *(undefined8 *)(param_1 + 0x10e) = 0;
      }
      if (*(long *)(param_1 + 0x11a) != 0) {
        FUN_0041b550();
        *(undefined8 *)(param_1 + 0x11a) = 0;
      }
      FUN_004bfb80(*(undefined8 *)(param_1 + 0x118));
      *(undefined8 *)(param_1 + 0x118) = 0;
      FUN_004bfb80(*(undefined8 *)(param_1 + 0x116));
      *(undefined8 *)(param_1 + 0x116) = 0;
      FUN_00444950(*(undefined8 *)(param_1 + 0x114));
      *(undefined8 *)(param_1 + 0x114) = 0;
      FUN_00444950(*(undefined8 *)(param_1 + 0x120));
      *(undefined8 *)(param_1 + 0x120) = 0;
      param_1[0x17a] = 0;
      param_1[0x1d1] = 0xffffffff;
      FUN_00444950(*(undefined8 *)(param_1 + 0x1da));
      *(undefined8 *)(param_1 + 0x1da) = 0;
      *(undefined8 *)(param_1 + 0x41) = 0xffffffffffffffff;
      FUN_00460a80(*(undefined8 *)(param_1 + 0x3e));
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x3e) = 0;
      FUN_0046c0e0(*(undefined8 *)(param_1 + 0x34),0);
      lVar5 = *(long *)(param_1 + 2);
      if (lVar5 == **(long **)(param_1 + 0x166)) {
        uVar3 = (**(code **)(lVar5 + 0x18))(param_1);
        iVar2 = (int)uVar3;
      }
      else {
        (**(code **)(lVar5 + 0x20))(param_1);
        lVar5 = **(long **)(param_1 + 0x166);
        *(long *)(param_1 + 2) = lVar5;
        uVar3 = (**(code **)(lVar5 + 0x10))(param_1);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        return uVar3;
      }
      FUN_004c5c70(param_1 + 0x1fe);
      return 1;
    }
    uVar3 = 0x44;
    uVar4 = 0x259;
  }
  FUN_004014b0(0x14,0xa4,uVar3,"external/openssl/ssl/ssl_lib.c",uVar4);
  return 0;
}


