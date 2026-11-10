/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e35a00; name: FUN_02e35a00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02e35a00(long param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(char *)((long)param_2 + 0x11) == '\0') {
    cVar2 = *(char *)((long)param_2 + 0x25);
  }
  else {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    FUN_02e36990(uVar5,param_2[2],param_2[1],param_2[3],&local_24,&local_28,&uStack_34,&local_38,
                 &local_3c,*param_2);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,uVar4);
    uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
    if (*(char *)(param_2 + 4) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x28) | 1;
    }
    *(uint *)(param_1 + 0x28) = uVar1;
    cVar2 = *(char *)((long)param_2 + 0x25);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)((long)param_2 + 0x39);
  }
  else {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_02e36990(uVar5,param_2[7],param_2[6],param_2[8],&local_24,&local_28,&uStack_34,&local_38,
                 &local_3c,param_2[5]);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,lVar3 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffd;
    if (*(char *)(param_2 + 9) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x28) | 2;
    }
    *(uint *)(param_1 + 0x28) = uVar1;
    cVar2 = *(char *)((long)param_2 + 0x39);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)((long)param_2 + 0x4d);
  }
  else {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_02e36990(uVar5,param_2[0xc],param_2[0xb],param_2[0xd],&local_24,&local_28,&uStack_34,
                 &local_38,&local_3c,param_2[10]);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,lVar3 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffb;
    if (*(char *)(param_2 + 0xe) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x28) | 4;
    }
    *(uint *)(param_1 + 0x28) = uVar1;
    cVar2 = *(char *)((long)param_2 + 0x4d);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)((long)param_2 + 0x61);
  }
  else {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_02e36990(uVar5,param_2[0x11],param_2[0x10],param_2[0x12],&local_24,&local_28,&uStack_34,
                 &local_38,&local_3c,param_2[0xf]);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,uVar4);
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if (*(char *)(param_2 + 0x13) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x38) | 1;
    }
    *(uint *)(param_1 + 0x38) = uVar1;
    cVar2 = *(char *)((long)param_2 + 0x61);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)((long)param_2 + 0x75);
  }
  else {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    lVar3 = *(long *)(param_1 + 0x30);
    FUN_02e36990(uVar5,param_2[0x16],param_2[0x15],param_2[0x17],&local_24,&local_28,&uStack_34,
                 &local_38,&local_3c,param_2[0x14]);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,lVar3 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffd;
    if (*(char *)(param_2 + 0x18) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x38) | 2;
    }
    *(uint *)(param_1 + 0x38) = uVar1;
    cVar2 = *(char *)((long)param_2 + 0x75);
  }
  if (cVar2 != '\0') {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    lVar3 = *(long *)(param_1 + 0x30);
    FUN_02e36990(uVar5,param_2[0x1b],param_2[0x1a],param_2[0x1c],&local_24,&local_28,&uStack_34,
                 &local_38,&local_3c,param_2[0x19]);
    FUN_02e09ab0(local_24,local_28,uStack_34,local_38,local_3c,lVar3 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffb;
    if (*(char *)(param_2 + 0x1d) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x38) | 4;
    }
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}


