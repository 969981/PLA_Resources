/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00245294; name: FUN_00245294
 */


void FUN_00245294(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 local_44;
  
  *param_1 = param_4;
  bVar3 = *(byte *)(param_1 + 0x45) & 0xfb | *(char *)(param_5 + 0xdb) << 2;
  *(byte *)(param_1 + 0x45) = bVar3;
  bVar1 = *(char *)(param_5 + 0xdd) << 3;
  *(byte *)(param_1 + 0x45) = bVar3 & 0xf7 | bVar1;
  *(byte *)(param_1 + 0x45) = bVar3 & 0xf5 | bVar1 | *(char *)(param_5 + 0xdc) << 1;
  memset(param_1 + 1,0,0x210);
  lVar6 = FUN_002424d0(param_4,3);
  lVar7 = FUN_002424d0(*param_1,4);
  if (lVar6 != 0) {
    param_1[1] = lVar6;
    FUN_00245430(param_1,param_2,param_3,lVar6,param_5);
  }
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    else {
      local_44 = 1;
      lVar6 = FUN_00235844(*(undefined8 *)(param_5 + 0x20),param_3,0x4b53414d,1,&local_44);
      param_1[0x43] = lVar6;
      iVar4 = FUN_002506a0(*(undefined8 *)(lVar6 + 0x38),0x4b53414d,1,&local_44);
      *(int *)(param_1 + 0x44) = iVar4;
    }
    lVar6 = *(long *)(param_1[0x43] + 0x30);
    iVar5 = FUN_00230144();
    *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar6 + (long)(iVar5 * iVar4) * 4);
  }
  else {
    param_1[0xb] = lVar7;
    FUN_00245684(param_1,param_3,lVar7,param_5);
    lVar2 = **(long **)(param_5 + 0x30) + 0xc;
    FUN_002511c0((*(long **)(param_5 + 0x30))[4],
                 lVar2 + (ulong)*(uint *)(lVar2 + (ulong)*(ushort *)(lVar7 + 4) * 4));
    FUN_00251230();
    FUN_00245804(param_1,param_3,*(undefined8 *)(param_5 + 0x20),lVar6,lVar7);
  }
  param_1[1] = 0;
  param_1[0xb] = 0;
  return;
}


