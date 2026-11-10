/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00339d58; name: FUN_00339d58
 */


long FUN_00339d58(long param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar1 = *(ushort *)(param_1 + 10);
    if ((ulong)uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      lVar5 = 0;
      puVar7 = puVar6;
      do {
        puVar8 = puVar7 + 8;
        lVar2 = FUN_00339e40(puVar7 + 2,*puVar7);
        lVar5 = lVar5 + lVar2;
        puVar7 = puVar8;
      } while (puVar8 != puVar6 + (ulong)uVar1 * 8);
    }
  }
  else {
    plVar9 = *(undefined8 **)(param_1 + 0x10) + 1;
    plVar10 = (long *)**(undefined8 **)(param_1 + 0x10);
    if (plVar10 == plVar9) {
      return 0;
    }
    lVar5 = 0;
    do {
      lVar2 = FUN_00339e40(plVar10 + 5,(int)plVar10[4]);
      lVar5 = lVar5 + lVar2;
      plVar3 = (long *)plVar10[1];
      if ((long *)plVar10[1] == (long *)0x0) {
        plVar3 = plVar10 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != plVar10) {
          do {
            lVar2 = *plVar3;
            plVar3 = (long *)(lVar2 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar2);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      plVar10 = plVar4;
    } while (plVar4 != plVar9);
  }
  return lVar5;
}


