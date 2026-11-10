/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055eafc; name: FUN_0055eafc
 */


undefined2 * FUN_0055eafc(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    puVar2 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (puVar2 != (undefined2 *)0x0) {
      puVar2[1] = param_3;
      *puVar2 = 2;
      puVar2[2] = 1;
      puVar2[0x13] = 0;
      *(undefined8 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 0xf) = 0;
      *(undefined8 *)(puVar2 + 0xb) = 0;
    }
  }
  else {
    uVar3 = (ulong)param_2;
    if (param_2 == 1) {
      uVar1 = *param_1;
      puVar2 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (puVar2 != (undefined2 *)0x0) {
        puVar2[1] = param_3;
        *puVar2 = 3;
        puVar2[2] = 1;
        puVar2[0x13] = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 0xf) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
      }
      *(undefined4 *)(puVar2 + 0xc) = uVar1;
    }
    else {
      puVar2 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (puVar2 != (undefined2 *)0x0) {
        puVar2[1] = param_3;
        *puVar2 = 4;
        puVar2[2] = 1;
        puVar2[0x13] = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 0xf) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
      }
      do {
        FUN_0055e314(puVar2,*param_1);
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
  }
  return puVar2;
}


