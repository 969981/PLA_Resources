/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342c1c; name: FUN_00342c1c
 */


long FUN_00342c1c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong *puVar6;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar7;
  long lVar8;
  undefined *local_88;
  undefined *local_80;
  undefined ***local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  
  if (*(int *)(param_2 + 0x7c) != 0) {
    iVar5 = FUN_0033f438(*(undefined8 *)(param_1 + 0x20),param_1);
    if ((((iVar5 == 2) && (extraout_x1 != 0)) && (*(char *)(extraout_x1 + 0x43) != '\0')) &&
       (*(long *)(extraout_x1 + 0x50) == param_2)) {
      return extraout_x1;
    }
    if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
      iVar5 = FUN_0033f438(*(undefined8 *)(param_1 + 0x20),param_1,param_3);
      puVar4 = PTR_LAB_04373b88;
      puVar3 = PTR_LAB_04373aa0;
      puVar2 = PTR_LAB_04373a98;
      if (extraout_x1_00 == 0) {
        return 0;
      }
      if (iVar5 != 1) {
        return 0;
      }
      uVar7 = (ulong)*(uint *)(extraout_x1_00 + 0x80);
      if (0 < (int)*(uint *)(extraout_x1_00 + 0x80)) {
        lVar8 = 0;
        do {
          puVar1 = (undefined *)(*(long *)(extraout_x1_00 + 0x50) + lVar8);
          if (*(long *)(puVar1 + 0x50) == param_2) {
            puVar6 = *(ulong **)(puVar1 + 0x30);
            if ((puVar6 != (ulong *)0x0) &&
               (local_80 = puVar2, local_88 = puVar1, *puVar6 != 0xffffffffffffffff)) {
              local_78 = &local_70;
              local_70 = &local_80;
              ppuStack_68 = &local_88;
              std::__call_once(puVar6,&local_78,(_func_void_void_ptr *)puVar3);
            }
            if ((*(int *)(puVar1 + 0x38) == 0xb) && (*(int *)(puVar1 + 0x3c) == 1)) {
              puVar6 = *(ulong **)(puVar1 + 0x30);
              if ((puVar6 != (ulong *)0x0) && (*puVar6 != 0xffffffffffffffff)) {
                local_70 = (undefined **)puVar2;
                local_80 = puVar1;
                local_78 = &local_70;
                ppuStack_68 = &local_80;
                std::__call_once(puVar6,&local_78,(_func_void_void_ptr *)puVar4);
              }
              if (*(long *)(puVar1 + 0x68) == extraout_x1_00) {
                return (long)puVar1;
              }
            }
          }
          lVar8 = lVar8 + 0x98;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  return 0;
}


