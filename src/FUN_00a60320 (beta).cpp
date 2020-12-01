
/* WARNING: Removing unreachable block (ram,0x00a604a7) */
/* WARNING: Could not reconcile some variable overlaps */

void __fastcall FUN_00a60320(int param_1)

{
  undefined4 ****ppppuVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  int **in_FS_OFFSET;
  double dVar6;
  undefined auVar7 [16];
  uint uStack220;
  undefined auStack204 [4];
  undefined4 ****local_c8;
  char local_c1;
  void **local_c0;
  void **local_bc;
  undefined4 local_b8;
  void **local_b4;
  void **local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  double local_a0;
  int local_98;
  void *local_94;
  undefined4 local_84;
  uint local_80;
  void *local_7c [4];
  undefined4 local_6c;
  uint local_68;
  void *local_64 [4];
  undefined4 local_54;
  uint local_50;
  void *local_4c;
  undefined4 local_3c;
  uint local_38;
  void *local_34;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int *local_14;
  undefined *puStack16;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack16 = &LAB_00c9e789;
  local_14 = *in_FS_OFFSET;
  local_1c = DAT_00e0b000 ^ (uint)auStack204;
  uStack220 = DAT_00e0b000 ^ (uint)&stack0xffffff28;
  *(int ***)in_FS_OFFSET = &local_14;
  local_c8 = (undefined4 ****)0x0;
  local_a0 = (double)DAT_00e41d38 + (double)(&DAT_00d3a240)[(DAT_00e41d38 >> 0x1f) * 0x1fffffff];
  local_98 = param_1;
  FUN_00767520();
  if (*(char *)(param_1 + 0x48) != '\0') goto LAB_00a60626;
  dVar6 = local_a0 - 1.10000000;
  if (2147483647.00000000 <= dVar6) {
    dVar6 = dVar6 * 0.50000000;
  }
  iVar4 = (int)dVar6 * 0x41a7 + ((int)dVar6 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  iVar4 = iVar4 * 0x41a7 + (iVar4 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  iVar4 = iVar4 * 0x41a7 + (iVar4 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  iVar4 = iVar4 * 0x41a7 + (iVar4 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  local_a8 = (double)iVar4;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = (void *)((uint)local_94 & 0xffffff00);
  FUN_0041da50();
  ppppuVar1 = *DAT_00e449bc;
  FUN_007a93f0();
  if (local_c8 == ppppuVar1) {
LAB_00a6055d:
    local_c1 = '\0';
  }
  else {
    iVar4 = (int)local_a8 * 0x41a7 + ((int)local_a8 / 0x1f31d) * -0x7fffffff;
    if (iVar4 < 1) {
      iVar4 = iVar4 + 0x7fffffff;
    }
    local_a8 = (double)iVar4;
    local_c1 = '\x01';
    if (0.89999998 < (float)(local_a8 * 0.00000000) + 0.00000000) goto LAB_00a6055d;
  }
  if (0xf < local_80) {
    operator_delete(local_94);
  }
  if (local_c1 != '\0') {
    FUN_0041c980();
    local_c = 0;
    FUN_00a62130();
    local_c = 0xffffffff;
    if (0xf < local_80) {
      operator_delete(local_94);
    }
  }
  iVar4 = (int)local_a8 * 0x41a7 + ((int)local_a8 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  *(float *)(param_1 + 0x4c) = (float)iVar4 * 0.00000000 + 0.00000000;
  FUN_00a5f7d0();
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined *)(param_1 + 0x48) = 1;
LAB_00a60626:
  local_c8 = (undefined4 ****)param_1;
  FUN_00a60c10();
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (void *)((uint)local_7c[0] & 0xffffff00);
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (void *)((uint)local_64[0] & 0xffffff00);
  local_c = 2;
  ppvVar2 = (void **)FUN_00436c60();
  if (local_7c != ppvVar2) {
    if (0xf < local_68) {
      operator_delete(local_7c[0]);
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (void *)((uint)local_7c[0] & 0xffffff00);
    FUN_00429ae0();
  }
  if (0xf < local_80) {
    operator_delete(local_94);
  }
  ppvVar2 = (void **)FUN_00436c60();
  if (local_64 != ppvVar2) {
    if (0xf < local_50) {
      operator_delete(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = (void *)((uint)local_64[0] & 0xffffff00);
    FUN_00429ae0();
  }
  if (0xf < local_80) {
    operator_delete(local_94);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  FUN_0041da50();
  local_c8 = (undefined4 ****)&stack0xfffffef4;
  local_c._0_1_ = 3;
  FUN_0041d240(local_7c,0,0xffffffff);
  local_c._0_1_ = 4;
  FUN_0041d240(local_64,0,0xffffffff);
  local_c._0_1_ = 3;
  FUN_00a60180();
  local_c._0_1_ = 6;
  if (0xf < local_38) {
    operator_delete(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_80 = 0xf;
  local_84 = 0;
  local_94 = (void *)((uint)local_94 & 0xffffff00);
  FUN_0041da50();
  local_c8 = (undefined4 ****)&stack0xfffffef4;
  local_c._0_1_ = 7;
  FUN_0041d240(local_7c,0,0xffffffff);
  local_c._0_1_ = 8;
  FUN_0041d240(local_64,0,0xffffffff);
  local_c._0_1_ = 7;
  FUN_00a60180();
  local_c = CONCAT31(local_c._1_3_,10);
  if (0xf < local_80) {
    operator_delete(local_94);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = (void *)((uint)local_94 & 0xffffff00);
  dVar6 = ((double)DAT_00e41d38 + (double)(&DAT_00d3a240)[(DAT_00e41d38 >> 0x1f) * 0x1fffffff]) *
          0.17127000 + 1323.59030000;
  if (2147483647.00000000 <= dVar6) {
    dVar6 = dVar6 * 0.50000000;
  }
  iVar4 = (int)dVar6 * 0x41a7 + ((int)dVar6 / 0x1f31d) * -0x7fffffff;
  if (iVar4 < 1) {
    iVar4 = iVar4 + 0x7fffffff;
  }
  auVar7 = CONCAT88((double)(int)((ulonglong)(double)iVar4 >> 0x20),(double)iVar4);
  iVar4 = 5;
  do {
    iVar3 = (int)SUB168(auVar7,0) * 0x41a7 + ((int)SUB168(auVar7,0) / 0x1f31d) * -0x7fffffff;
    if (iVar3 < 1) {
      iVar3 = iVar3 + 0x7fffffff;
    }
    local_a0 = (double)iVar3;
    auVar7 = CONCAT88((double)(int)((ulonglong)local_a0 >> 0x20),local_a0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_c8 = (undefined4 ****)local_b0;
  local_a8._0_4_ = local_bc;
  local_a8._0_4_ = local_bc;
  if ((local_b4 != local_b0) && (local_c0 != local_bc)) {
    FUN_00a5fca0();
    FUN_00a5fca0();
    local_a8._0_4_ = local_bc;
  }
  local_c8 = (undefined4 ****)local_b0;
  local_bc = (void **)local_a8;
  if (local_c0 != (void **)0x0) {
    ppvVar2 = (void **)local_a8;
    ppvVar5 = local_c0;
    if (local_c0 != (void **)local_a8) {
      do {
        if ((void *)0xf < ppvVar5[5]) {
          operator_delete(*ppvVar5);
          ppvVar2 = (void **)local_a8;
        }
        ppvVar5[5] = (void *)0xf;
        ppvVar5[4] = (void *)0x0;
        *(undefined *)ppvVar5 = 0;
        ppvVar5 = ppvVar5 + 6;
      } while (ppvVar5 != ppvVar2);
    }
    operator_delete(local_c0);
    local_c0 = (void **)0x0;
    local_bc = (void **)0x0;
    local_b8 = 0;
  }
  ppvVar2 = local_b4;
  if (local_b4 != (void **)0x0) {
    while (ppvVar2 != local_b0) {
      if ((void *)0xf < ppvVar2[5]) {
        operator_delete(*ppvVar2);
      }
      ppvVar2[5] = (void *)0xf;
      ppvVar2[4] = (void *)0x0;
      *(undefined *)ppvVar2 = 0;
      ppvVar2 = ppvVar2 + 6;
    }
    operator_delete(local_b4);
    local_b4 = (void **)0x0;
    local_b0 = (void **)0x0;
    local_ac = 0;
  }
  if (0xf < local_50) {
    operator_delete(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (void *)((uint)local_64[0] & 0xffffff00);
  if (0xf < local_68) {
    operator_delete(local_7c[0]);
  }
  local_c = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (void *)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_20) {
    operator_delete(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = (void *)((uint)local_34 & 0xffffff00);
  if (DAT_00e5474c == 0) {
    local_c8 = (undefined4 ****)operator_new(0x198);
    local_c = 0xb;
    if (local_c8 == (undefined4 ****)0x0) {
      DAT_00e5474c = 0;
    }
    else {
      DAT_00e5474c = FUN_005bc800();
    }
    local_c = 0xffffffff;
  }
  if (*(int *)(DAT_00e5474c + 0x18) != 0) {
    FUN_0066f070();
  }
  *in_FS_OFFSET = local_14;
  FUN_00c1805a();
  return;
}

