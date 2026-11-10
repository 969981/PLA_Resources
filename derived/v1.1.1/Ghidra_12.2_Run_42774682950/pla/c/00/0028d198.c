/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d198; name: FUN_0028d198
 */


void FUN_0028d198(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04373040;
  puVar2 = PTR_DAT_04373038;
  if (0 < *(int *)PTR_DAT_04373040) {
    lVar4 = 0;
    lVar5 = 0x28;
    do {
      lVar1 = *(long *)puVar2 + lVar5;
      (*param_1)(lVar1,lVar1 + 8,param_2);
      *(undefined8 *)(*(long *)puVar2 + lVar5) = 0xffffffffffffffff;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xa8;
    } while (lVar4 < *(int *)puVar3);
  }
  return;
}


