/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda05c; name: FUN_02eda05c
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_02eda05c(long *param_1,long param_2,undefined8 param_3,short param_4,byte param_5,
                 byte param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_58;
  
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *param_1 = 0;
    return false;
  }
  puVar2[10] = 0;
  *puVar2 = &PTR_FUN_042aaa18;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *param_1 = (long)puVar2;
  *(byte *)((long)puVar2 + 0x5a) = param_5 & 1;
  *(short *)(puVar2 + 0xb) = param_4;
  *(byte *)((long)puVar2 + 0x5b) = param_6 & 1;
  puVar2[2] = param_3;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined1 *)(puVar2 + 5) = 0xff;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  puVar2[7] = 0;
  if ((param_2 == 0) || (param_4 == 0)) goto LAB_02eda104;
  local_58 = 0x10000;
  FUN_02ed30dc(param_2 + 0x30,puVar2,&local_58);
  if (puVar2[8] != 0) goto LAB_02eda104;
  puVar2[8] = param_2;
  uVar7 = (uint)param_2;
  if (DAT_0440a940 == 0) {
LAB_02eda288:
    FUN_02eea980(&DAT_0440a930);
    if (DAT_0440a940 == 0) goto LAB_02eda104;
    uVar1 = 0;
    if (DAT_0440a940 != 0) {
      uVar1 = uVar7 / DAT_0440a940;
    }
    uVar8 = (ulong)(uVar7 - uVar1 * DAT_0440a940);
    plVar4 = *(long **)(DAT_0440a938 + uVar8 * 8);
  }
  else {
    uVar1 = 0;
    if (DAT_0440a940 != 0) {
      uVar1 = uVar7 / DAT_0440a940;
    }
    uVar8 = (ulong)(uVar7 - uVar1 * DAT_0440a940);
    plVar4 = *(long **)(DAT_0440a938 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4;
      do {
        if (*(uint *)(plVar5 + 1) == uVar7) {
          plVar5 = plVar5 + 2;
          lVar6 = *plVar5;
          goto joined_r0x02eda2d4;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    fVar9 = (float)NEON_ucvtf(DAT_0440a948);
    if (0.9 < fVar9 / (float)DAT_0440a940) goto LAB_02eda288;
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (*(uint *)(plVar4 + 1) == uVar7) {
      plVar5 = plVar4 + 2;
      lVar6 = *plVar5;
      goto joined_r0x02eda2d4;
    }
  }
  puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *(undefined8 *)(DAT_0440a938 + uVar8 * 8);
    *(uint *)(puVar3 + 1) = uVar7;
    plVar5 = puVar3 + 2;
    *plVar5 = 0;
    *(undefined8 **)(DAT_0440a938 + uVar8 * 8) = puVar3;
    DAT_0440a948 = DAT_0440a948 + 1;
    lVar6 = *plVar5;
joined_r0x02eda2d4:
    if (lVar6 == 0) {
      *plVar5 = (long)puVar2;
      puVar2[1] = 0;
    }
    else {
      puVar2[1] = lVar6;
      *plVar5 = (long)puVar2;
    }
  }
LAB_02eda104:
  uVar7 = 0;
  if (*(long *)(param_2 + 0x80) != 0) {
    lVar6 = *(long *)(*(long *)(param_2 + 0x80) + 0x80);
    if (lVar6 == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = 1;
      do {
        lVar6 = *(long *)(lVar6 + 0x80);
        uVar7 = uVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  uVar8 = 0x4000000000000000;
  if ((*(uint *)(param_2 + 0xaa) & 0x20000) != 0) {
    uVar8 = 0x2000000000000000;
  }
  puVar2[0xd] = uVar8 | (ulong)uVar7 << 0x20 | (ulong)*(uint *)(param_2 + 0x10);
  return *param_1 != 0;
}


