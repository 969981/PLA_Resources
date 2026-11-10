/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e704cc; name: FUN_02e704cc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02e704cc(long param_1,long *param_2,byte param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  byte local_24 [4];
  
  local_24[0] = param_3 & 1;
  plVar2 = (long *)param_2[1];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2;
    while( true ) {
      plVar3 = (long *)*plVar3;
      param_2[1] = (long)plVar3;
      if ((long *)*param_2 == plVar2) {
        *param_2 = 0;
      }
      if ((*(byte *)((long)plVar2 + 0x14) & 7) == 0) {
        FUN_02e70938(param_1);
      }
      else {
        FUN_02e709b0();
      }
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)param_2[1];
      if (plVar2 != plVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  FUN_02e70b38(param_1);
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    bVar1 = true;
    plVar2 = *(long **)(param_1 + 0xd8);
    do {
      plVar3 = (long *)*plVar2;
      FUN_02e7124c(plVar2,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x610),bVar1,local_24);
      bVar1 = local_24[0] == 0;
      plVar2 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}


