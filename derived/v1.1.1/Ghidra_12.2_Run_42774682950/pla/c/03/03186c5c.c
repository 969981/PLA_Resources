/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186c5c; name: FUN_03186c5c
 */


long FUN_03186c5c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  ulong local_58;
  
  uVar11 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar6) {
    param_2 = uVar6;
  }
  FUN_032bd100(param_2,0x90,*param_5,&local_58);
  uVar6 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
  if (0 < (int)param_4) {
    if (lVar5 == param_3) {
      lVar7 = param_3 + 0x70;
      uVar8 = uVar11;
      do {
        *(long *)(lVar7 + -0x30) = lVar7 + -0x20;
        *(undefined4 *)(lVar7 + -0x28) = 0;
        *(undefined4 *)(lVar7 + -0x24) = 0x80000004;
        uVar8 = uVar8 - 1;
        *(long *)(lVar7 + -0x10) = lVar7;
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined4 *)(lVar7 + -4) = 0x80000004;
        lVar7 = lVar7 + 0x90;
      } while (uVar8 != 0);
    }
    else {
      lVar7 = 0;
      uVar8 = uVar11;
      do {
        puVar1 = (undefined8 *)(param_3 + lVar7);
        uVar9 = puVar1[5];
        puVar2 = (undefined8 *)(lVar5 + lVar7);
        puVar2[3] = puVar1[3];
        puVar2[5] = uVar9;
        puVar2[1] = puVar1[1];
        uVar9 = *puVar1;
        puVar2[2] = puVar1[2];
        *puVar2 = uVar9;
        uVar9 = puVar1[4];
        puVar2[6] = puVar1[6];
        puVar2[4] = uVar9;
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar1 + 7);
        *(undefined4 *)((long)puVar2 + 0x3c) = *(undefined4 *)((long)puVar1 + 0x3c);
        puVar2[8] = 0;
        puVar2[9] = 0x8000000000000000;
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(puVar1 + 9);
        *(undefined4 *)((long)puVar2 + 0x4c) = *(undefined4 *)((long)puVar1 + 0x4c);
        puVar10 = (undefined8 *)puVar1[8];
        if (puVar1 + 10 == puVar10) {
          puVar2[8] = puVar2 + 10;
          *(undefined4 *)(puVar2 + 10) = *(undefined4 *)puVar10;
          *(undefined4 *)((long)puVar2 + 0x54) = *(undefined4 *)((long)puVar1 + 0x54);
          *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
          *(undefined4 *)((long)puVar2 + 0x5c) = *(undefined4 *)((long)puVar1 + 0x5c);
        }
        else {
          puVar2[8] = puVar10;
          puVar1[8] = puVar1 + 10;
          *(undefined4 *)((long)puVar1 + 0x4c) = 0x80000004;
        }
        *(undefined4 *)(puVar1 + 9) = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0x8000000000000000;
        *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        *(undefined4 *)((long)puVar2 + 0x6c) = *(undefined4 *)((long)puVar1 + 0x6c);
        puVar10 = (undefined8 *)puVar1[0xc];
        if (puVar1 + 0xe == puVar10) {
          puVar2[0xc] = puVar2 + 0xe;
          *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)puVar10;
          *(undefined4 *)((long)puVar2 + 0x74) = *(undefined4 *)((long)puVar1 + 0x74);
          *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(puVar1 + 0xf);
          *(undefined4 *)((long)puVar2 + 0x7c) = *(undefined4 *)((long)puVar1 + 0x7c);
        }
        else {
          puVar2[0xc] = puVar10;
          puVar1[0xc] = puVar1 + 0xe;
          *(undefined4 *)((long)puVar1 + 0x6c) = 0x80000004;
        }
        *(undefined4 *)(puVar1 + 0xd) = 0;
        uVar3 = *(undefined4 *)(puVar1 + 0x10);
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + 0x90;
        *(undefined1 *)((long)puVar2 + 0x84) = *(undefined1 *)((long)puVar1 + 0x84);
        *(undefined4 *)(puVar2 + 0x10) = uVar3;
      } while (uVar8 != 0);
    }
    puVar4 = PTR_PTR_0434a080;
    piVar12 = (int *)(param_3 + 0x6c);
    do {
      piVar12[-1] = 0;
      if ((-1 < *piVar12) && (*(long *)(piVar12 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(piVar12 + -3),*piVar12 << 2);
      }
      piVar12[-3] = 0;
      piVar12[-2] = 0;
      *piVar12 = -0x80000000;
      piVar12[-9] = 0;
      if ((-1 < piVar12[-8]) && (*(long *)(piVar12 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(piVar12 + -0xb),piVar12[-8] << 2);
      }
      piVar12[-0xb] = 0;
      piVar12[-10] = 0;
      uVar11 = uVar11 - 1;
      piVar12[-8] = -0x80000000;
      piVar12 = piVar12 + 0x24;
    } while (uVar11 != 0);
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar6 & 0x3fffffff) * 0x90);
  }
  uVar6 = 0x3fffffff;
  if (local_58 < 0x23ffffff70) {
    uVar6 = (uint)(local_58 / 0x90);
  }
  *param_5 = uVar6;
  return lVar5;
}


