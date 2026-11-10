/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024fe7c; name: FUN_0024fe7c
 */


void FUN_0024fe7c(long param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (param_1 != lVar4) {
    cVar1 = *(char *)(lVar4 + 0x98);
    while( true ) {
      if ((cVar1 == '\0') || (plVar2 = *(long **)(lVar4 + 0x90), plVar2[1] == -1)) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x40))();
        (*param_2)(plVar2 + 1,uVar3,param_3);
        *(undefined8 *)(*(long *)(lVar4 + 0x90) + 8) = 0xffffffffffffffff;
        lVar4 = *(long *)(lVar4 + 8);
      }
      if (param_1 == lVar4) break;
      cVar1 = *(char *)(lVar4 + 0x98);
    }
  }
  return;
}


