/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea20d4; name: FUN_02ea20d4
 */


void FUN_02ea20d4(undefined8 param_1,long param_2,int param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *local_78;
  ulong uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  plVar1 = (long *)0x0;
  if (param_6 == 0) {
    plVar1 = (long *)(param_2 + 0x120);
  }
  plVar5 = (long *)(param_2 + 0x148);
  if (param_6 != 5) {
    plVar5 = plVar1;
  }
  plVar5 = (long *)*plVar5;
  uVar9 = (ulong)param_6;
  do {
    if (plVar5 == (long *)0x0) {
      puVar4 = (undefined8 *)FUN_02ea22e4();
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      puVar4[1] = param_2;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined1 *)((long)puVar4 + 0x1c) = 0;
      puVar2 = *(ulong **)(param_2 + 0x178);
joined_r0x02ea2138:
      if (puVar2 == (ulong *)0x0) {
        puVar2 = (ulong *)(*DAT_0442d138)(2,0x28);
        if (puVar2 == (ulong *)0x0) {
          *(undefined8 *)(param_2 + 0x178) = 0;
          return;
        }
        *(undefined1 *)(puVar2 + 4) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0xffffffffffffffff;
        *(ulong **)(param_2 + 0x178) = puVar2;
      }
      uVar7 = 1L << ((ulong)*(uint *)(&DAT_03a9f0d0 + uVar9 * 4) & 0x3f);
      if ((*puVar2 & uVar7) == 0) {
        *puVar2 = *puVar2 | uVar7;
        FUN_02ee89dc();
        lVar6 = *(long *)(param_2 + 0x178);
        *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
        if (*(uint *)(lVar6 + 0x18) != 0) {
          lVar8 = (ulong)*(uint *)(lVar6 + 0x18) << 4;
          uVar7 = 0xffffffffffffffff;
          puVar2 = *(ulong **)(lVar6 + 0x10);
          do {
            uVar7 = *puVar2 & uVar7;
            lVar8 = lVar8 + -0x10;
            *(ulong *)(lVar6 + 8) = uVar7;
            puVar2 = puVar2 + 2;
          } while (lVar8 != 0);
        }
      }
      *(undefined1 *)((long)puVar4 + 0x1c) = 0;
      if (puVar4[2] != 0) {
        FUN_02f0f0a8(param_1,DAT_0440a150,puVar4[2],uVar9,param_4,param_5,2);
        return;
      }
      if (param_4 != 0) {
        local_68 = *(float *)(puVar4 + 3);
        fStack_64 = (float)param_1;
        if (local_68 != fStack_64) {
          local_58 = 0xd;
          local_54 = 0x101;
          local_52 = 0;
          local_78 = puVar4;
          uStack_70 = uVar9;
          local_60 = param_4;
          uStack_5c = param_5;
          uVar3 = FUN_02f0ed58(DAT_0440a150,&local_78,1,0);
          puVar4[2] = uVar3;
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02ea2224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(param_1,puVar4,uVar9,1);
      return;
    }
    if (*(int *)(plVar5 + 1) == param_3) {
      puVar4 = plVar5 + 2;
      puVar2 = *(ulong **)(param_2 + 0x178);
      goto joined_r0x02ea2138;
    }
    plVar5 = (long *)*plVar5;
  } while( true );
}


