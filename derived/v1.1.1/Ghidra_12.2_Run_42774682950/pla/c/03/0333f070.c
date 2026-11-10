/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333f070; name: FUN_0333f070
 */


void FUN_0333f070(undefined2 *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    lVar6 = tpidr_el0;
    lVar5 = *(long *)(lVar6 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar5;
    }
    puVar3 = (undefined4 *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar5 + 8) + 0x58),4,0x270);
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  lVar6 = 0;
  *puVar3 = param_2;
  do {
    puVar1 = (uint *)(*(long *)(param_1 + 4) + lVar6 * 4);
    uVar2 = *puVar1;
    iVar4 = (int)lVar6;
    lVar6 = lVar6 + 1;
    puVar1[1] = iVar4 + (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  } while (lVar6 != 0x26f);
  *param_1 = 0;
  return;
}


