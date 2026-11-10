/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e8d4; name: FUN_02f3e8d4
 */


void FUN_02f3e8d4(float param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_30 = 0;
  local_28 = (undefined8 *)0x0;
  uVar2 = param_3;
  if (param_2[1] != 0) {
    lVar3 = param_2[1];
    do {
      lVar5 = *(long *)(lVar3 + 8);
      FUN_02f3fb18(lVar3,&local_30,(int)param_3);
      lVar3 = lVar5;
    } while (lVar5 != 0);
    uVar2 = param_3 & 0xffffffff;
    if (local_28 != (undefined8 *)0x0) {
      puVar4 = local_28;
      do {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar4 + 0xc));
        fVar6 = fVar6 * (1.0 / param_1);
        fVar7 = 0.5;
        if (fVar6 <= 0.0) {
          fVar7 = -0.5;
        }
        *(int *)((long)puVar4 + 0xc) = (int)(fVar7 + fVar6);
        puVar4 = (undefined8 *)puVar4[3];
        puVar1 = local_28;
      } while (puVar4 != (undefined8 *)0x0);
      while( true ) {
        uVar2 = param_3 & 0xffffffff;
        local_28 = puVar1;
        if (puVar1 == (undefined8 *)0x0) break;
        local_28 = (undefined8 *)puVar1[3];
        if (local_28 == (undefined8 *)0x0) {
          local_30 = 0;
          local_28 = (undefined8 *)0x0;
        }
        if (*(uint *)(puVar1 + 2) >> 0x1e == 2) {
          (**(code **)(*param_2 + 8))(param_2,&local_30,puVar1);
        }
        FUN_02e7a138(param_2,*puVar1,puVar1 + 1,*(undefined4 *)((long)puVar1 + 0xc),0,1);
        FUN_02e7c354(*puVar1);
        FUN_02f59e60(0,puVar1);
        puVar1 = local_28;
      }
    }
  }
  FUN_02e7a378(param_2,uVar2);
  return;
}


