/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060cf04; name: FUN_0060cf04
 */


long * FUN_0060cf04(undefined4 param_1,undefined2 param_2,undefined2 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  switch(param_1) {
  case 1:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x58);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(PTR_DAT_04375370 + 0x10);
      FUN_00609e38(plVar3 + 2);
    }
    break;
  case 2:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(PTR_DAT_04375370 + 0x10);
      FUN_00609e38(plVar3 + 2);
      puVar2 = PTR_DAT_04375378;
      plVar3[0xb] = param_4;
      *plVar3 = (long)(puVar2 + 0x10);
    }
    break;
  case 3:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = 4;
      puVar2 = PTR_DAT_04375380;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *plVar3 = (long)(puVar2 + 0x10);
    }
    break;
  case 4:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined2 *)(plVar3 + 1) = param_2;
    *(undefined2 *)((long)plVar3 + 10) = 8;
    puVar2 = PTR_DAT_04375388;
    goto LAB_0060d068;
  case 5:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined2 *)(plVar3 + 1) = param_2;
    *(undefined2 *)((long)plVar3 + 10) = param_3;
    puVar2 = PTR_DAT_04375360;
LAB_0060d068:
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[2] = 0;
    break;
  case 6:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      puVar2 = PTR_DAT_04375390 + 0x10;
      *(undefined2 *)((long)plVar3 + 0xc) = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)puVar2;
    }
    break;
  case 7:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      puVar2 = PTR_DAT_04375398;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(puVar2 + 0x10);
      puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      plVar3[2] = (long)puVar1;
    }
    break;
  default:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


