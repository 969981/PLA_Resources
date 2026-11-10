/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022f694; name: FUN_0022f694
 */


void FUN_0022f694(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_0021d748(*(undefined8 *)(param_1 + 0x80));
  lVar2 = 0;
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x260) + lVar3);
    (*param_2)(puVar1,*(long *)(param_1 + 600) + lVar2,param_3);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + 0x78;
    *puVar1 = 0xffffffffffffffff;
  } while (lVar3 != 0x128);
  return;
}


