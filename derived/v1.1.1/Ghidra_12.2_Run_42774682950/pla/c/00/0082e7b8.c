/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082e7b8; name: FUN_0082e7b8
 */


void FUN_0082e7b8(undefined8 param_1,undefined2 *param_2,uint param_3,uint param_4,
                 undefined4 param_5,byte param_6,byte param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar5 = local_60;
  if (((param_3 & 0xffff) == 0) || ((param_4 & 0xff) == 0)) {
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    *param_2 = (short)param_3;
    *(char *)(param_2 + 1) = (char)param_4;
    *(char *)((long)param_2 + 3) = (char)param_5;
    *(byte *)(param_2 + 2) = param_6 & 1;
    *(byte *)((long)param_2 + 5) = param_7 & 1;
    uVar2 = FUN_007e336c();
    puVar3 = (undefined4 *)FUN_0081a750(0x70,uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined1 *)((long)puVar3 + 6) = 0;
      puVar3[6] = 0;
      puVar3[0x14] = 0;
      *(undefined1 *)(puVar3 + 0x15) = 0;
      *(undefined8 *)(puVar3 + 0x16) = 0;
      *(undefined1 *)(puVar3 + 0x18) = 0;
      *(undefined8 *)(puVar3 + 0x1a) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 10) = 0;
      *(undefined8 *)(puVar3 + 0xc) = 0;
      *(undefined8 *)(puVar3 + 0xe) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x12) = 0;
    }
    *(undefined4 **)(param_2 + 8) = puVar3;
    FUN_0082da5c(local_50,puVar3,param_3,param_4,param_5,param_7 & 1);
    if (local_50[0] == 0) {
      FUN_0082e994(param_2);
      bVar1 = *(byte *)((long)param_2 + 3);
      uVar10 = (ulong)bVar1;
      uVar2 = FUN_007e336c();
      puVar4 = (undefined1 *)FUN_0081a750(uVar10,uVar2);
      if ((uVar10 != 0) && (puVar4 != (undefined1 *)0x0)) {
        uVar6 = uVar10 & 3;
        if (uVar10 - 1 < 3) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          do {
            *(undefined4 *)(puVar4 + lVar8) = 0;
            lVar8 = lVar8 + 4;
          } while (uVar10 - uVar6 != lVar8);
        }
        if ((bVar1 & 3) != 0) {
          puVar9 = puVar4 + lVar8;
          do {
            uVar6 = uVar6 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          } while (uVar6 != 0);
        }
      }
      *(undefined1 **)(param_2 + 0x14) = puVar4;
      if ((*(char *)((long)param_2 + 3) != '\0') &&
         (*puVar4 = 0xff, 1 < *(byte *)((long)param_2 + 3))) {
        uVar7 = 1;
        do {
          uVar10 = (ulong)uVar7;
          uVar7 = uVar7 + 1;
          *(undefined1 *)(*(long *)(param_2 + 0x14) + uVar10) = 0xff;
        } while (uVar7 < *(byte *)((long)param_2 + 3));
      }
      FUN_0082ecb8(param_2);
      local_60[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_0082e8e0;
    }
  }
  piVar5 = local_50;
LAB_0082e8e0:
  FUN_007ee578(param_1,piVar5);
  return;
}


