/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee89dc; name: FUN_02ee89dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ee89dc(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  undefined8 local_68;
  
  if (DAT_0440a940 == 0) {
    return;
  }
  plVar8 = (long *)*DAT_0440a938;
  if (plVar8 == (long *)0x0) {
    uVar7 = 0;
    do {
      if (DAT_0440a940 - 1 == uVar7) {
        return;
      }
      uVar7 = uVar7 + 1;
      plVar8 = (long *)DAT_0440a938[uVar7 & 0xffffffff];
    } while (plVar8 == (long *)0x0);
  }
  else {
    uVar7 = 0;
  }
  do {
    for (plVar5 = (long *)plVar8[2]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      lVar6 = plVar5[8];
      local_68 = (**(code **)(*plVar5 + 0x28))(plVar5);
      uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if ((lVar6 != 0) && (FUN_02ed8974(lVar6,plVar5,&local_68,uVar2 & 1), plVar5[8] == 0)) {
        plVar5[8] = lVar6;
        uVar2 = (uint)lVar6;
        if (DAT_0440a940 == 0) {
LAB_02ee8be8:
          FUN_02eea980(&DAT_0440a930);
          if (DAT_0440a940 == 0) goto LAB_02ee8b58;
          uVar1 = 0;
          if (DAT_0440a940 != 0) {
            uVar1 = uVar2 / DAT_0440a940;
          }
          uVar9 = (ulong)(uVar2 - uVar1 * DAT_0440a940);
          plVar3 = (long *)DAT_0440a938[uVar9];
        }
        else {
          uVar1 = 0;
          if (DAT_0440a940 != 0) {
            uVar1 = uVar2 / DAT_0440a940;
          }
          uVar9 = (ulong)(uVar2 - uVar1 * DAT_0440a940);
          plVar3 = (long *)DAT_0440a938[uVar9];
          if (plVar3 != (long *)0x0) {
            plVar4 = plVar3;
            do {
              if (*(uint *)(plVar4 + 1) == uVar2) {
                plVar4 = plVar4 + 2;
                lVar6 = *plVar4;
                goto joined_r0x02ee8bb8;
              }
              plVar4 = (long *)*plVar4;
            } while (plVar4 != (long *)0x0);
          }
          fVar10 = (float)NEON_ucvtf(DAT_0440a948);
          if (0.9 < fVar10 / (float)DAT_0440a940) goto LAB_02ee8be8;
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (*(uint *)(plVar3 + 1) == uVar2) {
            plVar4 = plVar3 + 2;
            lVar6 = *plVar4;
            goto joined_r0x02ee8bb8;
          }
        }
        plVar3 = (long *)(*DAT_0442d138)(0,0x18);
        if (plVar3 != (long *)0x0) {
          *plVar3 = DAT_0440a938[uVar9];
          *(uint *)(plVar3 + 1) = uVar2;
          plVar4 = plVar3 + 2;
          *plVar4 = 0;
          DAT_0440a938[uVar9] = (long)plVar3;
          DAT_0440a948 = DAT_0440a948 + 1;
          lVar6 = *plVar4;
joined_r0x02ee8bb8:
          if (lVar6 == 0) {
            *plVar4 = (long)plVar5;
            plVar5[1] = 0;
          }
          else {
            plVar5[1] = lVar6;
            *plVar4 = (long)plVar5;
          }
        }
      }
LAB_02ee8b58:
    }
    plVar8 = (long *)*plVar8;
    while (plVar8 == (long *)0x0) {
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar2;
      if (DAT_0440a940 <= uVar2) {
        return;
      }
      plVar8 = (long *)DAT_0440a938[uVar2];
    }
  } while( true );
}


