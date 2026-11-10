/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031716c; name: FUN_0031716c
 */


undefined1 * FUN_0031716c(long param_1,long *param_2,undefined1 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x1;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((undefined1 *)*param_4 <= param_3) {
    param_3 = (undefined1 *)FUN_00310ec4(param_4,param_3);
  }
  *param_3 = 0xb;
  uVar3 = *(uint *)(param_1 + 0x44);
  param_3[1] = 0x10;
  if (uVar3 < 0x80) {
    param_3[2] = (byte)uVar3;
    param_3 = param_3 + 3;
  }
  else {
    param_3[2] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe == 0) {
      param_3[3] = (char)(uVar3 >> 7);
      param_3 = param_3 + 4;
    }
    else {
      param_3 = param_3 + 4;
      uVar3 = uVar3 >> 7;
      do {
        puVar5 = param_3;
        uVar1 = uVar3 >> 7;
        puVar5[-1] = (byte)uVar3 | 0x80;
        param_3 = puVar5 + 1;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar1;
      } while (uVar2 != 0);
      *puVar5 = (char)uVar1;
    }
  }
  plVar4 = (long *)FUN_0038c150(extraout_x1,param_2,param_1,0);
  *param_3 = 0x1a;
  uVar3 = (**(code **)(*plVar4 + 0x50))();
  if (uVar3 < 0x80) {
    param_3[1] = (byte)uVar3;
    param_3 = param_3 + 2;
  }
  else {
    param_3[1] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe == 0) {
      param_3[2] = (char)(uVar3 >> 7);
      param_3 = param_3 + 3;
    }
    else {
      param_3 = param_3 + 3;
      uVar3 = uVar3 >> 7;
      do {
        puVar5 = param_3;
        uVar1 = uVar3 >> 7;
        puVar5[-1] = (byte)uVar3 | 0x80;
        param_3 = puVar5 + 1;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar1;
      } while (uVar2 != 0);
      *puVar5 = (char)uVar1;
    }
  }
  puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x60))(plVar4,param_3,param_4);
  if ((undefined1 *)*param_4 <= puVar5) {
    puVar5 = (undefined1 *)FUN_00310ec4(param_4);
  }
  *puVar5 = 0xc;
  return puVar5 + 1;
}


