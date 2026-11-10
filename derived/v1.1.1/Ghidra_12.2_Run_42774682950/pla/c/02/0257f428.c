/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257f428; name: FUN_0257f428
 */


void FUN_0257f428(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  byte *__s;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  undefined8 uStack_38;
  
  if (*(float *)(param_2 + 0x8c) < 1.1920929e-07) {
    uVar10 = 0;
    cVar2 = *(char *)(param_1 + 0x20);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x3c);
    if (uVar1 == 3) {
      bVar4 = *(int *)(param_2 + 0x68) == 1;
    }
    else {
      bVar4 = false;
    }
    uVar7 = 1;
    if ((uVar1 | 1) == 7 || uVar1 == 3) {
      uVar7 = 2;
    }
    uVar10 = 3;
    if (!(bool)(bVar4 | uVar1 == 4)) {
      uVar10 = uVar7;
    }
    cVar2 = *(char *)(param_1 + 0x20);
  }
  if ((cVar2 == '\0') || (uVar10 != *(uint *)(param_1 + 0x24))) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    lVar9 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x24) = uVar10;
    local_50 = (undefined1 *)0x34d81b41d12ad2b8;
    pbStack_48 = (byte *)0x394776f;
    local_40 = 0x12;
    uStack_38 = 0;
    lVar5 = 0;
    if (*(long *)(lVar9 + 0x148) != 0) {
      FUN_0283b430(*(long *)(lVar9 + 0x148),&local_50);
      lVar5 = *(long *)(lVar9 + 0x148);
    }
    local_50 = (undefined1 *)0x34d81c41d12ad46b;
    pbStack_48 = (byte *)0x38bbff2;
    local_40 = 0x12;
    uStack_38 = 0;
    lVar6 = 0;
    if (lVar5 != 0) {
      FUN_0283b430(lVar5,&local_50);
      lVar6 = *(long *)(lVar9 + 0x148);
    }
    local_50 = (undefined1 *)0x4ae0bd426ee308fe;
    pbStack_48 = (byte *)0x399e9c5;
    local_40 = 0x12;
    uStack_38 = 0;
    lVar5 = 0;
    if (lVar6 != 0) {
      FUN_0283b430(lVar6,&local_50);
      lVar5 = *(long *)(lVar9 + 0x148);
    }
    local_50 = (undefined1 *)0x4ae0be426ee30ab1;
    pbStack_48 = (byte *)0x39aeed5;
    local_40 = 0x12;
    uStack_38 = 0;
    if (lVar5 != 0) {
      FUN_0283b430(lVar5,&local_50);
    }
    FUN_00d2e2f0((float)uVar10,lVar9,"anime_switch_dif");
    __s = (&PTR_s_anime_keep_dif_lv0_0425da30)[uVar10];
    local_40 = strlen((char *)__s);
    bVar3 = *__s;
    local_50 = &DAT_cbf29ce484222645;
    pbVar8 = __s;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    uStack_38 = 0;
    if (*(long *)(lVar9 + 0x148) != 0) {
      pbStack_48 = __s;
      FUN_0283b1e8(*(long *)(lVar9 + 0x148),&local_50);
    }
  }
  return;
}


