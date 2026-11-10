/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014614b4; name: FUN_014614b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_014614b4(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar5 = param_1[0x1a];
  if ((uVar5 & 1) != 0) {
    uVar9 = FUN_01832ce8(param_1 + 0x16);
    fVar8 = 540.0 - (float)((ulong)uVar9 >> 0x20);
    *(float *)(param_1 + 0x15) = (float)uVar9 + -960.0;
    *(float *)((long)param_1 + 0xac) = fVar8;
    if ((*(byte *)(param_1 + 0x1a) >> 4 & 1) != 0) {
      if (*(float *)(param_1 + 0x18) < fVar8) {
        *(float *)((long)param_1 + 0xac) = *(float *)(param_1 + 0x18);
        if ((char)param_1[0x19] == '\0') {
          pcVar7 = *(code **)(*param_1 + 0x30);
LAB_01461608:
          (*pcVar7)(param_1);
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
      }
      else if (fVar8 < *(float *)((long)param_1 + 0xc4)) {
        *(float *)((long)param_1 + 0xac) = *(float *)((long)param_1 + 0xc4);
        if ((char)param_1[0x19] == '\0') {
          pcVar7 = *(code **)(*param_1 + 0x38);
          goto LAB_01461608;
        }
      }
      else if ((char)param_1[0x19] != '\0') {
        (**(code **)(*param_1 + 0x40))(param_1);
        *(undefined1 *)(param_1 + 0x19) = 0;
      }
    }
    lVar6 = param_1[0xb];
    uVar1 = *(undefined4 *)((long)param_1 + 0xac);
    *(int *)(lVar6 + 0x30) = (int)param_1[0x15];
    *(undefined4 *)(lVar6 + 0x34) = uVar1;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar5 = param_1[0x1a];
    if ((char)param_1[0x1b] == '\0') {
      if (((uint)uVar5 >> 5 & 1) == 0) {
        param_1[0x1a] = uVar5 | 0x20;
        *(byte *)(param_1[0xb] + 0x58) = *(byte *)(param_1[0xb] + 0x58) | 1;
        if (*(char *)param_1[0xd] != '\0') {
          plVar3 = param_1 + 0xc;
LAB_01461674:
          FUN_0283b1e8(param_1[0x14],plVar3);
          uVar5 = param_1[0x1a];
          uVar4 = (uint)uVar5;
          goto joined_r0x01461680;
        }
      }
LAB_0146158c:
      uVar5 = param_1[0x1a];
      uVar4 = (uint)uVar5;
    }
    else {
      if (((uint)uVar5 >> 3 & 1) == 0) {
        if ((uVar5 & 9) == 1) {
          param_1[0x1a] = uVar5 | 8;
          if (*(char *)param_1[0xd] != '\0') {
            FUN_0283b430(param_1[0x14],param_1 + 0xc);
          }
          if (*(char *)param_1[0x11] != '\0') {
            plVar3 = param_1 + 0x10;
            goto LAB_01461674;
          }
        }
        goto LAB_0146158c;
      }
      bVar2 = *(byte *)(param_1[0xb] + 0x58);
      if ((bVar2 & 1) == 0) goto LAB_0146158c;
      *(byte *)(param_1[0xb] + 0x58) = bVar2 & 0xfe;
      param_1[0x1a] = param_1[0x1a] | 8;
      uVar5 = param_1[0x1a];
      uVar4 = (uint)uVar5;
    }
joined_r0x01461680:
    if ((uVar4 >> 6 & 1) != 0) {
      uVar5 = uVar5 & 0xffffffffffffffbf;
      param_1[0x1a] = uVar5;
      uVar4 = (uint)uVar5;
      goto joined_r0x0146159c;
    }
  }
  uVar4 = (uint)uVar5;
joined_r0x0146159c:
  if ((uVar4 >> 2 & 1) == 0) {
    param_1[0x1a] = uVar5 | 4;
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = param_1[0x1a];
    uVar4 = (uint)uVar5;
  }
  else {
    uVar4 = (uint)uVar5;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    if (*(char *)param_1[0x11] != '\0') {
      uVar5 = FUN_0283b5c4(param_1[0x14],param_1 + 0x10);
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar5 = param_1[0x1a];
    }
    param_1[0x1a] = uVar5 & 0xffffffffffffffe4;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}


