/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033276f0; name: FUN_033276f0
 */


void FUN_033276f0(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_0444b388 == 0) {
    return;
  }
  plVar3 = (long *)0x0;
  iVar2 = -1;
  do {
    if ((plVar3 == (long *)0x0) || (plVar3 = (long *)plVar3[0xc], plVar3 == (long *)0x0)) {
      iVar2 = iVar2 + 1;
      if (*(int *)(DAT_0444b388 + 0x40) <= iVar2) {
        return;
      }
      plVar3 = (long *)**(undefined8 **)(*(long *)(DAT_0444b388 + 0x38) + (long)iVar2 * 8);
    }
    if ((plVar3 != (long *)0x0) && (lVar4 = (long)(int)plVar3[1], (int)plVar3[1] != 0)) {
      lVar1 = lVar4 * 0x10;
      do {
        lVar1 = lVar1 + -0x10;
        lVar4 = lVar4 + -1;
        if (*(long **)(*plVar3 + lVar1) != (long *)0x0) {
          (**(code **)(**(long **)(*plVar3 + lVar1) + 0x28))();
        }
      } while (lVar4 != 0);
    }
  } while( true );
}


