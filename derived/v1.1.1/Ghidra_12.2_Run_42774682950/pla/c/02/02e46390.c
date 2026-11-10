/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e46390; name: FUN_02e46390
 */


void FUN_02e46390(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_48;
  long local_38;
  
  for (plVar6 = (long *)param_1[0xe]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (*(char *)((long)plVar6 + 0x4c) != '\0') {
      FUN_02e5520c(plVar6);
    }
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != 0) {
    lVar5 = *(long *)param_1[3];
    if (lVar5 == 0) {
      uVar4 = 0;
      do {
        if (uVar3 - 1 == uVar4) goto LAB_02e463bc;
        uVar4 = uVar4 + 1;
        lVar5 = ((long *)param_1[3])[uVar4 & 0xffffffff];
      } while (lVar5 == 0);
    }
    else {
      uVar4 = 0;
    }
    do {
      uVar2 = FUN_02e53e6c(lVar5);
      if (((uVar2 & 1) != 0) && (FUN_02e54be8(lVar5), *(char *)(lVar5 + 0x690) != '\0')) {
        FUN_02e54670(lVar5,&local_38,&local_48);
        if (local_38 == 0) {
          lVar7 = 0;
          if (local_48 != 0) goto LAB_02e46490;
LAB_02e464e0:
          lVar8 = 0;
        }
        else {
          lVar7 = *(long *)(local_38 + 0x78);
          if (local_48 == 0) goto LAB_02e464e0;
LAB_02e46490:
          lVar8 = *(long *)(local_48 + 0x78);
        }
        if (lVar7 != 0) {
          FUN_02e5589c(lVar7,lVar5,1,lVar8 == lVar7);
        }
        if ((lVar8 != 0) && (lVar8 != lVar7)) {
          FUN_02e5589c(lVar8,lVar5,0,1);
        }
      }
      lVar5 = *(long *)(lVar5 + 0x48);
      if (lVar5 == 0) {
        uVar3 = *(uint *)(param_1 + 4);
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar1;
          if (uVar3 <= uVar1) goto LAB_02e463bc;
          lVar5 = *(long *)(param_1[3] + (ulong)uVar1 * 8);
        } while (lVar5 == 0);
      }
    } while( true );
  }
LAB_02e463bc:
  if ((int)param_1[1] != 0) {
    lVar5 = *(long *)*param_1;
    if (lVar5 == 0) {
      uVar4 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar4) goto LAB_02e463c4;
        uVar4 = uVar4 + 1;
        lVar5 = ((long *)*param_1)[uVar4 & 0xffffffff];
      } while (lVar5 == 0);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        *(undefined1 *)(lVar5 + 0x38) = 0;
        lVar5 = *(long *)(lVar5 + 0x48);
      } while (lVar5 != 0);
      do {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar3;
        if (*(uint *)(param_1 + 1) <= uVar3) {
          uVar3 = *(uint *)(param_1 + 4);
          if (uVar3 == 0) goto LAB_02e463c8;
          goto LAB_02e46550;
        }
        lVar5 = *(long *)(*param_1 + (ulong)uVar3 * 8);
      } while (lVar5 == 0);
    } while( true );
  }
LAB_02e463c4:
  if (uVar3 == 0) {
LAB_02e463c8:
    for (plVar6 = (long *)param_1[0xe]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      *(undefined1 *)((long)plVar6 + 0x4c) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x7c) = 0;
    return;
  }
LAB_02e46550:
  lVar5 = *(long *)param_1[3];
  if (lVar5 == 0) {
    uVar4 = 0;
    do {
      if (uVar3 - 1 == uVar4) goto LAB_02e463c8;
      uVar4 = uVar4 + 1;
      lVar5 = ((long *)param_1[3])[uVar4 & 0xffffffff];
    } while (lVar5 == 0);
  }
  else {
    uVar4 = 0;
  }
  do {
    do {
      *(undefined1 *)(lVar5 + 0x38) = 0;
      lVar5 = *(long *)(lVar5 + 0x48);
    } while (lVar5 != 0);
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
      if (*(uint *)(param_1 + 4) <= uVar3) goto LAB_02e463c8;
      lVar5 = *(long *)(param_1[3] + (ulong)uVar3 * 8);
    } while (lVar5 == 0);
  } while( true );
}


