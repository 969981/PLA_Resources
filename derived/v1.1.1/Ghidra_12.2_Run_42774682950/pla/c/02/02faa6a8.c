/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02faa6a8; name: FUN_02faa6a8
 */


void FUN_02faa6a8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,undefined8 *param_7,byte param_8,long param_9)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_6 + 0x30) == '\0') {
    fVar2 = (float)*(undefined8 *)(param_3 + 0x40);
    local_b0 = (undefined *)
               CONCAT44((float)((ulong)*param_7 >> 0x20) * fVar2,(float)*param_7 * fVar2);
    uStack_a8 = CONCAT44((float)((ulong)param_7[1] >> 0x20) * fVar2,(float)param_7[1] * fVar2);
    fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    local_a0 = CONCAT44((float)((ulong)param_7[2] >> 0x20) * fVar2,(float)param_7[2] * fVar2);
    uStack_98 = CONCAT44((float)((ulong)param_7[3] >> 0x20) * fVar2,(float)param_7[3] * fVar2);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x48);
    local_90 = CONCAT44((float)((ulong)param_7[4] >> 0x20) * fVar2,(float)param_7[4] * fVar2);
    uStack_88 = CONCAT44((float)((ulong)param_7[5] >> 0x20) * fVar2,(float)param_7[5] * fVar2);
    uVar4 = param_7[7];
    uVar3 = param_7[6];
  }
  else {
    puVar1 = *(undefined8 **)(param_3 + 0x20);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x40);
    local_b0 = (undefined *)CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar2,(float)*puVar1 * fVar2)
    ;
    uStack_a8 = CONCAT44((float)((ulong)puVar1[1] >> 0x20) * fVar2,(float)puVar1[1] * fVar2);
    fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    local_a0 = CONCAT44((float)((ulong)puVar1[2] >> 0x20) * fVar2,(float)puVar1[2] * fVar2);
    uStack_98 = CONCAT44((float)((ulong)puVar1[3] >> 0x20) * fVar2,(float)puVar1[3] * fVar2);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x48);
    local_90 = CONCAT44((float)((ulong)puVar1[4] >> 0x20) * fVar2,(float)puVar1[4] * fVar2);
    uStack_88 = CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar2,(float)puVar1[5] * fVar2);
    uVar4 = puVar1[7];
    uVar3 = puVar1[6];
  }
  local_80 = CONCAT44((float)((ulong)uVar3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20),
                      (float)uVar3 + (float)*(undefined8 *)(param_3 + 0x50));
  uStack_78 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),
                       (float)uVar4 + (float)*(undefined8 *)(param_3 + 0x58));
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x28),&local_b0,&local_d0);
  fVar2 = (float)((ulong)uStack_c0 >> 0x20);
  fVar6 = (float)((ulong)local_d0 >> 0x20);
  fVar5 = (float)((ulong)uStack_b8 >> 0x20);
  fVar7 = (float)((ulong)uStack_c8 >> 0x20);
  local_70 = CONCAT44((fVar2 - fVar6) * 0.5,((float)uStack_c0 - (float)local_d0) * 0.5);
  uStack_68 = CONCAT44((fVar5 - fVar7) * 0.5,((float)uStack_b8 - (float)uStack_c8) * 0.5);
  local_d0 = CONCAT44((fVar6 + fVar2) * 0.5,((float)local_d0 + (float)uStack_c0) * 0.5);
  uStack_c8 = CONCAT44((fVar7 + fVar5) * 0.5,((float)uStack_c8 + (float)uStack_b8) * 0.5);
  local_90 = param_9;
  local_b0 = PTR_DAT_04372500 + 0x10;
  uStack_a8 = CONCAT71(uStack_a8._1_7_,*(undefined1 *)(param_9 + 8));
  local_a0 = NEON_fmin(*(undefined8 *)(param_9 + 0x10),0x5f7ffff05f7ffff0,4);
  uStack_98 = CONCAT71(uStack_98._1_7_,*(char *)(param_9 + 0x18) != '\0');
  uStack_a8 = CONCAT44(*(undefined4 *)(param_9 + 0xc),(undefined4)uStack_a8);
  FUN_02faa850(*(undefined1 *)(param_6 + 0x30),param_1,param_2,param_3,&local_d0,&local_70,param_4,
               param_5,param_6,param_7,param_8 & 1,&local_b0);
  return;
}


