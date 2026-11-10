/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035dd98; name: FUN_0035dd98
 */


void FUN_0035dd98(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_a8;
  undefined4 local_a0;
  undefined1 auStack_9c [36];
  byte local_78 [16];
  undefined8 local_68;
  
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x28);
      uVar2 = FUN_00366138(param_3 + 0x18,uVar5 & 0xffffffff);
      FUN_0035e5d0(param_1,lVar4 + lVar6,uVar2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x98;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x38);
      uVar2 = FUN_00365e80(param_3 + 0x30,uVar5 & 0xffffffff);
      FUN_0035dd98(param_1,lVar4 + lVar6,uVar2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x90;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x40);
      uVar2 = FUN_00365f68(param_3 + 0x48,uVar5 & 0xffffffff);
      FUN_0035e0b0(param_1,lVar4 + lVar6,uVar2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x50);
      uVar2 = FUN_00366138(param_3 + 0x78,uVar5 & 0xffffffff);
      FUN_0035e5d0(param_1,lVar4 + lVar6,uVar2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x98;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x80));
  }
  lVar6 = 0x1fffffff;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    lVar6 = 0x7fffffff;
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    uVar5 = 0;
    lVar4 = 4;
    iVar1 = *(int *)(*(long *)(param_2 + 0x48) + 4);
    while( true ) {
      if (lVar6 + 1 < (long)iVar1) {
        uVar7 = *(undefined8 *)(param_2 + 8);
        uVar2 = FUN_00366308(param_3 + 0x60,uVar5 & 0xffffffff);
        local_a8 = (char *)FUN_00320230(lVar6,auStack_9c);
        sVar3 = strlen(local_a8);
        local_a0 = (undefined4)sVar3;
        local_d8 = 0;
        local_d0 = 0xffffffff;
        local_108 = 0;
        local_100 = 0xffffffff;
        local_138 = 0;
        local_130 = 0xffffffff;
        local_168 = 0;
        local_160 = 0xffffffff;
        local_198 = 0;
        local_190 = 0xffffffff;
        local_1c8 = 0;
        local_1c0 = 0xffffffff;
        local_1f8 = 0;
        local_1f0 = 0xffffffff;
        local_228 = 0;
        local_220 = 0xffffffff;
        local_258 = 0;
        local_250 = 0xffffffff;
        FUN_003c6830(local_78,"Extension numbers cannot be greater than $0.",&local_a8,&local_d8,
                     &local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,&local_228,
                     &local_258);
                    /* try { // try from 0035e038 to 0035e04f has its CatchHandler @ 0035e08c */
        FUN_0034db00(param_1,uVar7,uVar2,1,local_78);
        if ((local_78[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_68);
        }
      }
      FUN_00366308(param_3 + 0x60,uVar5 & 0xffffffff);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
      if ((long)*(int *)(param_2 + 0x7c) <= (long)uVar5) break;
      iVar1 = *(int *)(*(long *)(param_2 + 0x48) + lVar4);
    }
  }
  return;
}


