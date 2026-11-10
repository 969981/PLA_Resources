/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333efd8; name: FUN_0333efd8
 */


void FUN_0333efd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    FUN_032cf368(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),lVar2,4,0x270);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


