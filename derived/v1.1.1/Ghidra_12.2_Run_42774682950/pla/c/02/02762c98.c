/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762c98; name: FUN_02762c98
 */


void FUN_02762c98(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0x28,8);
  uVar4 = *param_2;
  *(undefined8 *)(lVar1 + 0x1c) = uVar4;
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    do {
      if ((int)uVar4 < *(int *)((long)plVar2 + 0x1c)) {
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto code_r0x02762d04;
      }
      else {
        plVar3 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_02762d10;
        }
      }
      plVar2 = plVar3;
    } while( true );
  }
  plVar2 = plVar3;
LAB_02762d10:
  FUN_0276152c(param_1,plVar2,plVar3,lVar1);
  return;
code_r0x02762d04:
  plVar3 = plVar2;
  goto LAB_02762d10;
}


