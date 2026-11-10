/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4600; name: FUN_031f4600
 */


void FUN_031f4600(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  pauVar2 = param_1 + 1;
  auVar6 = NEON_fmax(*param_1,*param_2,4);
  auVar10 = NEON_fmin(*pauVar2,param_2[1],4);
  fVar5 = ABS(auVar10._0_4_ - auVar6._0_4_);
  fVar7 = ABS(auVar10._4_4_ - auVar6._4_4_);
  uVar9 = CONCAT44(fVar7,fVar5);
  fVar8 = ABS(auVar10._8_4_ - auVar6._8_4_);
  uVar9 = NEON_fminp(uVar9,uVar9,4);
  uVar9 = NEON_fmin(CONCAT44(fVar8,fVar8),uVar9,4);
  cVar1 = (&DAT_03aadfc0)
          [(-(uint)(fVar7 <= (float)((ulong)uVar9 >> 0x20)) & 2) + (uint)(fVar5 <= (float)uVar9) |
           -(uint)(fVar8 <= (float)uVar9) & 4];
  if (cVar1 == '\0') {
    pauVar4 = param_2 + 1;
    pauVar3 = pauVar2;
  }
  else if (cVar1 == '\x02') {
    pauVar4 = (undefined1 (*) [16])(param_2[1] + 8);
    pauVar3 = (undefined1 (*) [16])(param_1[1] + 8);
  }
  else if (cVar1 == '\x01') {
    pauVar4 = (undefined1 (*) [16])(param_2[1] + 4);
    pauVar3 = (undefined1 (*) [16])(param_1[1] + 4);
  }
  else {
    pauVar4 = (undefined1 (*) [16])(param_2[1] + 0xc);
    pauVar3 = (undefined1 (*) [16])(param_1[1] + 0xc);
  }
  if (*(float *)*pauVar3 <= *(float *)*pauVar4) {
    if (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        pauVar2 = (undefined1 (*) [16])(param_1[1] + 8);
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
      }
      else if (cVar1 == '\x01') {
        pauVar2 = (undefined1 (*) [16])(param_1[1] + 4);
        param_2 = (undefined1 (*) [16])(*param_2 + 4);
      }
      else {
        pauVar2 = (undefined1 (*) [16])(param_1[1] + 0xc);
        param_2 = (undefined1 (*) [16])(*param_2 + 0xc);
      }
    }
  }
  else if (cVar1 == '\0') {
    param_2 = param_2 + 1;
    pauVar2 = param_1;
  }
  else if (cVar1 == '\x02') {
    param_2 = (undefined1 (*) [16])(param_2[1] + 8);
    pauVar2 = (undefined1 (*) [16])(*param_1 + 8);
  }
  else if (cVar1 == '\x01') {
    param_2 = (undefined1 (*) [16])(param_2[1] + 4);
    pauVar2 = (undefined1 (*) [16])(*param_1 + 4);
  }
  else {
    param_2 = (undefined1 (*) [16])(param_2[1] + 0xc);
    pauVar2 = (undefined1 (*) [16])(*param_1 + 0xc);
  }
  *(undefined4 *)*param_2 = *(undefined4 *)*pauVar2;
  return;
}


