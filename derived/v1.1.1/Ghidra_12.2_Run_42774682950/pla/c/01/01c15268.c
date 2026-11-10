/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c15268; name: FUN_01c15268
 */


void FUN_01c15268(undefined4 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if ((*(long *)(param_2 + 0x270) != 0) && (FUN_009cdd5c(&local_68), local_68 != (long *)0x0)) {
    local_88 = (undefined1 *)0x3938faf76d4fe869;
    pcStack_80 = "ai_exciting";
    local_78 = 0xb;
    local_70 = (long *)0x0;
    local_a8 = 0x91646148ea32dd0c;
    pcStack_a0 = "Exciting_RimColor_EasingFunc";
    local_98 = 0x1c;
    local_90 = (long *)0x0;
    uVar6 = FUN_00ea3f80(&local_88,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    puVar5 = PTR_PTR_0437a4c8;
    lVar7 = (uVar6 & 0xffffffff) * 8;
    fVar9 = *(float *)(param_2 + 0x290);
    fVar10 = *(float *)(param_2 + 0x2b0);
    fVar8 = (float)(**(code **)(PTR_PTR_0437a4c8 + lVar7))(param_1);
    *(undefined8 *)(param_2 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
    *(ulong *)(param_2 + 0x2d0) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x2d0) >> 0x20),
                  fVar9 + (fVar10 - fVar9) * fVar8);
    fVar9 = *(float *)(param_2 + 0x294);
    fVar10 = *(float *)(param_2 + 0x2b4);
    fVar8 = (float)(**(code **)(puVar5 + lVar7))(param_1);
    *(undefined8 *)(param_2 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
    *(ulong *)(param_2 + 0x2d0) =
         CONCAT44(fVar9 + (fVar10 - fVar9) * fVar8,(int)*(undefined8 *)(param_2 + 0x2d0));
    fVar9 = *(float *)(param_2 + 0x298);
    fVar10 = *(float *)(param_2 + 0x2b8);
    fVar8 = (float)(**(code **)(puVar5 + lVar7))(param_1);
    *(ulong *)(param_2 + 0x2d8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x2d8) >> 0x20),
                  fVar9 + (fVar10 - fVar9) * fVar8);
    *(undefined8 *)(param_2 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
    fVar9 = *(float *)(param_2 + 0x29c);
    fVar10 = *(float *)(param_2 + 700);
    fVar8 = (float)(**(code **)(puVar5 + lVar7))(param_1);
    *(ulong *)(param_2 + 0x2d8) =
         CONCAT44(fVar9 + (fVar10 - fVar9) * fVar8,(int)*(undefined8 *)(param_2 + 0x2d8));
    *(undefined8 *)(param_2 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
    local_88 = (undefined1 *)0x1eb774d1eef8fbe2;
    pcStack_80 = "OverrideRimColor";
    local_78 = 0x1f;
    local_70 = (long *)0x0;
    FUN_00aef6cc(local_68,&local_88,param_2 + 0x2d0);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    fVar9 = *(float *)(param_2 + 0x2a0);
    fVar10 = *(float *)(param_2 + 0x2c0);
    fVar8 = (float)(**(code **)(puVar5 + (uVar6 & 0xffffffff) * 8))(param_1);
    *(float *)(param_2 + 0x2e0) = fVar9 + (fVar10 - fVar9) * fVar8;
    local_88 = &DAT_c48fa98e41e54f54;
    pcStack_80 = "OverrideRimPower";
    local_78 = 0x1f;
    local_70 = (long *)0x0;
    FUN_00aeee68(local_68,&local_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      lVar7 = local_68[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  return;
}


