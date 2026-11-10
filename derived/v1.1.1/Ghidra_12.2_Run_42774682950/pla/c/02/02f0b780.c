/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0b780; name: FUN_02f0b780
 */


void FUN_02f0b780(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_50;
  uint local_48;
  
  if ((param_2 != 0) && (uVar3 = (ulong)*(uint *)(param_2 + 0x10), *(uint *)(param_2 + 0x10) != 0))
  {
    piVar7 = *(int **)(param_2 + 8);
    if (param_3 == 0) {
      do {
        for (plVar4 = *(long **)(param_1 + 0x148); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if (*(int *)(plVar4 + 1) == *piVar7) {
            local_50 = *(undefined8 *)((long)plVar4 + 0xc);
            local_48 = *(uint *)((long)plVar4 + 0x14);
            goto LAB_02f0b890;
          }
        }
        local_48 = local_48 & 0xffffffe0;
        local_50 = 0;
LAB_02f0b890:
        FUN_02f0bc1c(param_1,*piVar7,&local_50,param_4);
        piVar7 = piVar7 + 1;
      } while (piVar7 != (int *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 4));
    }
    else {
      piVar8 = piVar7;
      do {
        iVar1 = *piVar8;
        for (plVar4 = *(long **)(param_1 + 0x148); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if (*(int *)(plVar4 + 1) == iVar1) {
            local_50 = *(undefined8 *)((long)plVar4 + 0xc);
            local_48 = *(uint *)((long)plVar4 + 0x14);
            bVar2 = *(byte *)(param_1 + 0xad);
            goto joined_r0x02f0b83c;
          }
        }
        local_48 = local_48 & 0xffffffe0;
        local_50 = 0;
        bVar2 = *(byte *)(param_1 + 0xad);
joined_r0x02f0b83c:
        if ((((bVar2 >> 3 & 1) != 0) && (((byte)local_48 >> 4 & 1) != 0)) &&
           (*(uint *)(param_3 + 0x10) != 0)) {
          lVar6 = (ulong)*(uint *)(param_3 + 0x10) << 2;
          piVar5 = *(int **)(param_3 + 8);
          do {
            if (*piVar5 == iVar1) goto LAB_02f0b858;
            lVar6 = lVar6 + -4;
            piVar5 = piVar5 + 1;
          } while (lVar6 != 0);
        }
        FUN_02f0bc1c(param_1,iVar1,&local_50,param_4);
        piVar7 = *(int **)(param_2 + 8);
        uVar3 = (ulong)*(uint *)(param_2 + 0x10);
LAB_02f0b858:
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar7 + uVar3);
    }
  }
  return;
}


