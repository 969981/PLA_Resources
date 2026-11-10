/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8dfc; name: FUN_02ee8dfc
 */


void FUN_02ee8dfc(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  
  if (param_2 == 0) {
    return;
  }
  FUN_02ed8974(param_2,param_1,param_3,param_4 & 1);
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  *(long *)(param_1 + 0x40) = param_2;
  uVar6 = (uint)param_2;
  if (DAT_0440a940 != 0) {
    uVar1 = 0;
    if (DAT_0440a940 != 0) {
      uVar1 = uVar6 / DAT_0440a940;
    }
    uVar7 = (ulong)(uVar6 - uVar1 * DAT_0440a940);
    plVar3 = *(long **)(DAT_0440a938 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3;
      do {
        if (*(uint *)(plVar5 + 1) == uVar6) {
          plVar5 = plVar5 + 2;
          lVar4 = *plVar5;
          goto joined_r0x02ee8f78;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    fVar8 = (float)NEON_ucvtf(DAT_0440a948);
    if (fVar8 / (float)DAT_0440a940 <= 0.9) goto joined_r0x02ee8f54;
  }
  FUN_02eea980(&DAT_0440a930);
  if (DAT_0440a940 == 0) {
    return;
  }
  uVar1 = 0;
  if (DAT_0440a940 != 0) {
    uVar1 = uVar6 / DAT_0440a940;
  }
  uVar7 = (ulong)(uVar6 - uVar1 * DAT_0440a940);
  plVar3 = *(long **)(DAT_0440a938 + uVar7 * 8);
joined_r0x02ee8f54:
  do {
    if (plVar3 == (long *)0x0) {
      puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x18);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(DAT_0440a938 + uVar7 * 8);
        *(uint *)(puVar2 + 1) = uVar6;
        plVar5 = puVar2 + 2;
        *plVar5 = 0;
        *(undefined8 **)(DAT_0440a938 + uVar7 * 8) = puVar2;
        DAT_0440a948 = DAT_0440a948 + 1;
        lVar4 = *plVar5;
joined_r0x02ee8f78:
        if (lVar4 == 0) {
          *plVar5 = param_1;
          *(undefined8 *)(param_1 + 8) = 0;
        }
        else {
          *(long *)(param_1 + 8) = lVar4;
          *plVar5 = param_1;
        }
      }
      return;
    }
    if (*(uint *)(plVar3 + 1) == uVar6) {
      plVar5 = plVar3 + 2;
      lVar4 = *plVar5;
      goto joined_r0x02ee8f78;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


