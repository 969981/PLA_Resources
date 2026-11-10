/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320bba4; name: FUN_0320bba4
 */


void FUN_0320bba4(long param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x918);
  puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x68) + (long)param_3 * 0x10);
  FUN_0320bc50(*(undefined8 *)(lVar2 + 0x50),lVar2 + 0x20,*puVar1,*(undefined8 *)(puVar1 + 2),
               param_2);
  lVar4 = (long)DAT_0444b53c;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  if (*(long *)(lVar3 + lVar4 * 8 + 0x18) == 0) {
    return;
  }
  FUN_0332a954();
  return;
}


