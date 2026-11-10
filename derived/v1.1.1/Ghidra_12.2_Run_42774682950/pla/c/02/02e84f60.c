/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e84f60; name: FUN_02e84f60
 */


undefined8 FUN_02e84f60(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  
  if ((param_2 != (long *)0x0) && (*(int *)(param_1 + 0x30) != 0)) {
    plVar3 = (long *)FUN_02e8766c();
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 == 0) {
      plVar7 = plVar3;
      do {
        lVar4 = plVar7[0x11];
        bVar2 = lVar4 != 0;
        plVar7 = (long *)plVar7[0x10];
        while( true ) {
          if (plVar7 == (long *)0x0) goto LAB_02e8503c;
          if (!bVar2) break;
          bVar2 = true;
          plVar7 = (long *)plVar7[0x10];
        }
      } while( true );
    }
    lVar4 = 0;
    bVar2 = false;
    plVar7 = plVar3;
    do {
      pbVar5 = (byte *)(*param_2 + 4);
      lVar6 = (ulong)uVar1 << 3;
      do {
        if (((int)plVar7[2] == *(int *)(pbVar5 + -4)) &&
           ((uint)*pbVar5 == (*(uint *)((long)plVar7 + 0xaa) >> 0x11 & 1))) goto LAB_02e850b8;
        lVar6 = lVar6 + -8;
        pbVar5 = pbVar5 + 8;
      } while (lVar6 != 0);
      if (bVar2) {
        bVar2 = true;
      }
      else {
        lVar4 = plVar7[0x11];
        bVar2 = lVar4 != 0;
      }
      plVar7 = (long *)plVar7[0x10];
    } while (plVar7 != (long *)0x0);
LAB_02e8503c:
    if (lVar4 != 0) {
      if (uVar1 == 0) {
        do {
          lVar4 = *(long *)(lVar4 + 0x88);
        } while (lVar4 != 0);
      }
      else {
        do {
          pbVar5 = (byte *)(*param_2 + 4);
          lVar6 = (ulong)uVar1 << 3;
          do {
            if ((*(int *)(lVar4 + 0x10) == *(int *)(pbVar5 + -4)) &&
               ((uint)*pbVar5 == (*(uint *)(lVar4 + 0xaa) >> 0x11 & 1))) {
LAB_02e850b8:
              (**(code **)(*plVar3 + 0x18))();
              return 1;
            }
            lVar6 = lVar6 + -8;
            pbVar5 = pbVar5 + 8;
          } while (lVar6 != 0);
          lVar4 = *(long *)(lVar4 + 0x88);
        } while (lVar4 != 0);
      }
    }
    (**(code **)(*plVar3 + 0x18))();
  }
  return 0;
}


