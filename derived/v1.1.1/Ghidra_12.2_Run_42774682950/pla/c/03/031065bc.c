/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031065bc; name: FUN_031065bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031065bc(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 local_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_190 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *local_100;
  long *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 auStack_e0 [144];
  
  if (*(char *)(param_1 + 0x15df) != '\0') {
    local_e8 = 0x90;
    puStack_f0 = auStack_e0;
    local_f8 = (long *)0x0;
    local_1c0 = 0;
    lStack_1b8 = 0;
    local_100 = PTR_DAT_043887d0 + 0x10;
    lVar1 = FUN_02fd8ea4(0,&local_100,&local_1c0);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x1680);
    local_1b0 = *param_3;
    local_1a8 = param_3[1];
    local_178 = 0;
    uStack_170 = 0;
    local_148 = 0;
    local_190[0] = 7;
    local_188 = 0;
    uStack_180 = 0;
    local_1c0 = param_2;
    lStack_1b8 = param_1;
    local_150 = param_4;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xa8))(lVar1,local_190,0,0)
    ;
    uStack_138 = _UNK_03889a88;
    local_140 = _DAT_03889a80;
    uStack_128 = DAT_0388a148;
    uStack_130 = DAT_0388a140;
    uStack_118 = _UNK_03888d18;
    local_120 = _DAT_03888d10;
    uStack_108 = _UNK_0388a138;
    uStack_110 = _DAT_0388a130;
    fVar2 = *(float *)(param_2 + 0x40);
    uVar3 = NEON_fmin(*(undefined8 *)(param_4 + 0x10),CONCAT44(fVar2,fVar2),4);
    local_1c8 = CONCAT44(fVar2 * fVar2,fVar2 * fVar2);
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    FUN_03106724(*(undefined8 *)(param_1 + 0x1660),param_2 + 0x30,&local_1c8,&local_1c0);
    local_100 = PTR_DAT_043724f0 + 0x10;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  return;
}


