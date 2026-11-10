/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00873aa4; name: FUN_00873aa4
 */


ulong FUN_00873aa4(long param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x860) == 0) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x860);
  }
  else if (*(long *)(param_1 + 0x910) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x910);
    uVar2 = 1;
  }
  else if (*(long *)(param_1 + 0x9c0) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x9c0);
    uVar2 = 2;
  }
  else if (*(long *)(param_1 + 0xa70) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0xa70);
    uVar2 = 3;
  }
  else if (*(long *)(param_1 + 0xb20) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0xb20);
    uVar2 = 4;
  }
  else if (*(long *)(param_1 + 0xbd0) == 0) {
    uVar2 = 5;
    puVar3 = (undefined8 *)(param_1 + 0xbd0);
  }
  else if (*(long *)(param_1 + 0xc80) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0xc80);
    uVar2 = 6;
  }
  else if (*(long *)(param_1 + 0xd30) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0xd30);
    uVar2 = 7;
  }
  else if (*(long *)(param_1 + 0xde0) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0xde0);
    uVar2 = 8;
  }
  else if (*(long *)(param_1 + 0xe90) == 0) {
    uVar2 = 9;
    puVar3 = (undefined8 *)(param_1 + 0xe90);
  }
  else if (*(long *)(param_1 + 0xf40) == 0) {
    uVar2 = 10;
    puVar3 = (undefined8 *)(param_1 + 0xf40);
  }
  else if (*(long *)(param_1 + 0xff0) == 0) {
    uVar2 = 0xb;
    puVar3 = (undefined8 *)(param_1 + 0xff0);
  }
  else if (*(long *)(param_1 + 0x10a0) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10a0);
    uVar2 = 0xc;
  }
  else {
    if (*(long *)(param_1 + 0x1150) == 0) {
      lVar1 = 0x1150;
      uVar2 = 0xd;
    }
    else {
      if (*(long *)(param_1 + 0x1200) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x1200);
        uVar2 = 0xe;
        goto LAB_00873c00;
      }
      if (*(long *)(param_1 + 0x12b0) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x12b0);
        uVar2 = 0xf;
        goto LAB_00873c00;
      }
      if (*(long *)(param_1 + 0x1360) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x1360);
        uVar2 = 0x10;
        goto LAB_00873c00;
      }
      if (*(long *)(param_1 + 0x1410) == 0) {
        lVar1 = 0x1410;
        uVar2 = 0x11;
      }
      else if (*(long *)(param_1 + 0x14c0) == 0) {
        lVar1 = 0x14c0;
        uVar2 = 0x12;
      }
      else if (*(long *)(param_1 + 0x1570) == 0) {
        lVar1 = 0x1570;
        uVar2 = 0x13;
      }
      else if (*(long *)(param_1 + 0x1620) == 0) {
        lVar1 = 0x1620;
        uVar2 = 0x14;
      }
      else if (*(long *)(param_1 + 0x16d0) == 0) {
        lVar1 = 0x16d0;
        uVar2 = 0x15;
      }
      else {
        if (*(long *)(param_1 + 0x1780) != 0) {
          return (ulong)*(ushort *)(param_1 + 0x60);
        }
        lVar1 = 0x1780;
        uVar2 = 0x16;
      }
    }
    puVar3 = (undefined8 *)(param_1 + lVar1);
  }
LAB_00873c00:
  param_1 = param_1 + uVar2 * 0xb0;
  FUN_0087088c(param_1 + 0x858);
  *puVar3 = param_2;
  *(undefined2 *)(param_1 + 0x868) = param_3;
  return uVar2;
}


