/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293490c; name: FUN_0293490c
 */


undefined8 FUN_0293490c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 auStack_230 [168];
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined1 *local_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [4];
  undefined1 *local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined2 local_6c;
  undefined1 local_6a;
  
  local_288 = 0;
  uStack_280 = 0;
  local_8c = &DAT_b00000008;
  uStack_84 = 0x41f000003f800000;
  local_7c = 0x643f800000;
  uStack_74 = 0x461c400000000001;
  local_6c = 0x101;
  local_6a = 1;
  (**(code **)(*(long *)param_1[0xc] + 0x28))((long *)param_1[0xc],auStack_2a8);
  (**(code **)(*(long *)param_1[0xc] + 0x30))();
  (**(code **)(*(long *)param_1[0x14] + 0x28))();
  (**(code **)(*(long *)param_1[0x14] + 0x20))((long *)param_1[0x14],auStack_e8);
  (**(code **)(*(long *)param_1[8] + 0x18))();
  local_140 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_6c = 0x101;
  local_6a = 1;
  local_8c = &DAT_b00000008;
  uStack_84 = 0x41f000003f800000;
  local_7c = 0x643f800000;
  uStack_74 = 0x461c400000000001;
  local_188 = &LAB_02934654;
  puStack_180 = &LAB_02934658;
  local_178 = &LAB_0293465c;
  puStack_170 = &LAB_02934680;
  local_168 = &LAB_029346a4;
  puStack_160 = &LAB_029346c4;
  local_148 = &LAB_029348f8;
  local_158 = &LAB_029347d4;
  puStack_150 = &LAB_029348e4;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,auStack_2a8);
  }
  uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))();
  if (((uVar3 & 1) != 0) ||
     (iVar2 = (**(code **)(*(long *)param_1[4] + 0x20))((long *)param_1[4],&local_188), iVar2 == 1))
  {
    if (*(char *)((long)param_1 + 0xe2) == '\0') {
      lVar4 = (**(code **)(*(long *)param_1[0x14] + 0x18))((long *)param_1[0x14],auStack_e8);
      if (lVar4 == 0) {
        return 0;
      }
      iVar2 = (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,auStack_e0,0);
      if (iVar2 != 1) {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0xe2) = 1;
    }
    uVar3 = (**(code **)(*(long *)param_1[0xc] + 0x18))();
    if (((uVar3 & 1) != 0) ||
       (iVar2 = (**(code **)(*(long *)param_1[0xc] + 0x20))
                          ((long *)param_1[0xc],auStack_2a8,auStack_230), iVar2 == 1)) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar2 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],auStack_90);
        if (iVar2 != 1) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x1c) = 1;
        cVar1 = *(char *)((long)param_1 + 0xe1);
      }
      else {
        cVar1 = *(char *)((long)param_1 + 0xe1);
      }
      if (cVar1 != '\0') {
        return 1;
      }
      uVar5 = (**(code **)(*(long *)param_1[0x10] + 0x10))((long *)param_1[0x10],&local_8c);
      if ((int)uVar5 == 1) {
        *(char *)((long)param_1 + 0xe1) = (char)uVar5;
        return uVar5;
      }
    }
  }
  return 0;
}


